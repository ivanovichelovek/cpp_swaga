#include <iostream>

struct A {
  A() { f(); }
  virtual void f() { std::cout << "A"; }
};

struct B : A {
  B() { f(); }
  void f() override { std::cout << "B"; }
};

struct C : B {
  void f() override { std::cout << "C"; }
};

int main() {
  C c;
}
