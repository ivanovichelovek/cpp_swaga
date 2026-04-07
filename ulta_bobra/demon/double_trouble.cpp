#include <iostream>

int main() {
  auto f = [] {
    static int n = 0;
    return n++;
  };
  auto g = f;
  std::cout << f() << " " << g() << " " << f();
}
