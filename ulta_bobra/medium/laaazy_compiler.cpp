#include <iostream>

int main() {
  int a = 4;
  if (a-- > 3 || ++a > 0) {}
  std::cout << a;
}
