#include <iostream>

void f() { std::cout << "global"; }

template<typename T>
struct Base {
  void f() { std::cout << "base"; }
};

template<typename T>
struct D : Base<T> {
  void run() { f(); }
};

int main() {
  D<int> d;
  d.run();
}
