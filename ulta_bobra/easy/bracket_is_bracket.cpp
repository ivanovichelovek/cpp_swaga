#include <iostream>
#include <vector>

int main() {
  std::vector<int> a(3, 5);
  std::vector<int> b{3, 5};
  std::cout << a.size() << " " << b.size();
}
