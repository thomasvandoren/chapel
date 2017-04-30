// Exercises basic declarations of instantiations.  Here, the type creator has
// declared an initializer with no arguments.  Basically, the type is not really
// generic.

class Foo {
  type t;

  proc init() {
    t = int;
    super.init();
  }
}

var foo: Foo(real); // We cannot create an instantiation with t = real, and that
// is not what this means, really.
writeln(foo.type:string);