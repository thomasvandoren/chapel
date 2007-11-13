module module1 {
  config var x: string = "that seems to work";
  def main() {
    writeln("x is: ", x);
    useModule2(); // initialize module2 without bringing it into main's scope
  }
  def useModule2() {
    use module2;
  }
}

module module2 {
  config var x: int = 2;
  config var z: string = "this one doesn't require it";
}

