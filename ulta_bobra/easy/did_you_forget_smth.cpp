#include <iostream>

int main() {
  int x = 5;
  int& ref = x;
  auto y = ref;
  y = 10;
  std::cout << x;
}
