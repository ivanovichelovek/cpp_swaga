#include <iostream>

int main() {
  unsigned char a = 255;
  unsigned char b = a + 1;
  std::cout << (a + 1 > 0) << "\n";
  std::cout << (b > 0) << "\n";
  std::cout << b;
}
