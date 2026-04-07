#include <iostream>

int main() {
  int a = 1;
  int b = 2;
  (true ? a : b) = 10;
  std::cout << a << " " << b;
}
