#include <iostream>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3};
  int i = -1;
  if (i < v.size()) {
    std::cout << "less";
  } else {
    std::cout << "greater";
  }
}
