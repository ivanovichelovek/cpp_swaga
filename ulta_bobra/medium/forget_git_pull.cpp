#include <iostream>

int main() {
  int x = 1;
  auto f = [=]() { return x; };
  x = 2;
  std::cout << f();
}
