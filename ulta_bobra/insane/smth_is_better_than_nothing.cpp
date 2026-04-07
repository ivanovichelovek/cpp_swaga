#include <iostream>

struct Empty {};

int main() {
  Empty arr[10];
  std::cout << sizeof(Empty) << " " << sizeof(arr);
}
