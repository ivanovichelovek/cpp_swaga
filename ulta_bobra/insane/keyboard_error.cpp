#include <iostream>

struct S { int x; };

int main() {
  S a[] = {{6}, {7}};
  S* p = a;
  std::cout << p->*&S::x * 0[p].*&S::x;
}
