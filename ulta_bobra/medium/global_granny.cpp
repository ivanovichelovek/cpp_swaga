#include <iostream>

struct Granny {
  int a = 10;
};

struct Mom : virtual Granny {
  Mom() { a = 100; }
};

struct Dad : virtual Granny {
  Dad() { a = 1000; }
};

struct Son : Dad, Mom {};

int main() {
  Son s;
  std::cout << s.a;
}
