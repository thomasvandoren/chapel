/*
 * 'isSorted' reduction implementation. Determines whether values are sorted,
 * or not.
 */

class isSorted : ReduceScanOp {
  type eltType;
  param communicative = false;
  var status = true;
  var first, last: eltType;

  var _accumulatedFirst: atomic bool;

  proc accumulate(value: eltType) {
    if _accumulatedFirst.compareExchange(false, true) {
      first = value;
      last = value;
    } else {
      if last > value then
        status = false;
      last = value;
    }
  }

  proc combine(state: isSorted(eltType)) {
    writeln("me: ", this, " other: ", state);
    status = status && state.status && last <= state.first;
    last = state.last;
  }

  proc generate() {
    return status;
  }

  proc writeThis(f: Writer) {
    f <~> "isSorted(";
    f <~> "eltType=";
    f <~> typeToString(eltType);
    f <~> ", communicative=";
    f <~> communicative;
    f <~> ", status=";
    f <~> status;
    f <~> ", first=";
    f <~> first;
    f <~> ", last=";
    f <~> last;
    f <~> ", _accumulatedFirst=";
    f <~> _accumulatedFirst.read();
    f <~> ")";
  }
}
