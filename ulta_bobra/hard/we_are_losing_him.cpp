#include <iostream>

void func(int arr[10]) {
  std::cout << sizeof(arr) << "\n";
}

int main() {
  int arr[10];
  func(arr);
}
