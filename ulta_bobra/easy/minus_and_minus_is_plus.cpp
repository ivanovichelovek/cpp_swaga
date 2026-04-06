#include <iostream>

int main() {
  int x = 10;
  x -= x -= 3;
  std::cout << x;
}
