#include <iostream>

struct Base {
  virtual void f(int x = 1) { std::cout << x; }
};

struct Derived : Base {
  void f(int x = 2) override { std::cout << x; }
};

int main() {
  Base* p = new Derived;
  p->f();
  delete p;
}
