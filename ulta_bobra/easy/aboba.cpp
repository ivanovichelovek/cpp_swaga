#include <iostream>

struct A {
  A() { std::cout << "A "; }
  ~A() { std::cout << "~A "; }
};

struct B : A {
  B() { std::cout << "B "; }
  ~B() { std::cout << "~B "; }
};

int main() {
  A a;
  B b;
}
