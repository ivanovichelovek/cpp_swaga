#include <algorithm>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>

int main() {
  int a[2];
  std::cout << &a[0] - &a[1] << "\n";//1
  std::cout << (long long)&a[0] - (long long)&a[1];//2
  //1 = ?
  //2 = ?
  //why
}
