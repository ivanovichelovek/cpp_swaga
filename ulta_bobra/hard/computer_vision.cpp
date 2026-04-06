#include <iostream>

struct Base {
  virtual void foo() const { std::cout << 1; }
};

struct Derived : Base {
  virtual void foo() { std::cout << 2; }
};

int main() {
  Derived d;
  Base& b = d;
  b.foo();
}
