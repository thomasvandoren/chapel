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
    status = status && state.status && last <= state.first;
    last = state.last;
  }

  proc generate() {
    return status;
  }
}
