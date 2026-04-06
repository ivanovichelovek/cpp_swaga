#include <iostream>

bool foo(int i) {
  return i&&&i;
}

int main() {
  std::cout << foo(0) << " " << foo(1);
}
