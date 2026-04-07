#include <iostream>

int main() {
  int x = 6;
  int y = 7;
  int* p = &x;
  int* q = &y;
  std::cout << *&*p**&*q;
}
