#include <iostream>

template <typename T, typename U>
void f(T, U) { std::cout << 1; }

template <>
void f(int, int) { std::cout << 2; }

template <typename T>
void f(T, T) { std::cout << 3; }

int main() {
  f(0, 0);
}
