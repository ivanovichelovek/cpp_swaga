#include <iostream>

void f(int value)  { value += 1; }
void g(int& value) { value += 1; }

int main() {
  int a = 10;
  int b = 10;
  int& x = a;
  int& y = b;
  f(a); f(b); g(a); g(b);
  f(x); f(y); g(x); g(y);
  std::cout << a << " " << b << " " << x << " " << y;
}
