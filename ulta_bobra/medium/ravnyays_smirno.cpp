#include <iostream>

// char - 1 байт
// int - 4 байта

struct A {
  char a;
  int  b;
  char c;
};

struct B {
  char a;
  char c;
  int  b;
};

int main() {
  std::cout << sizeof(A) << " " << sizeof(B);
}
