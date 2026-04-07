#include <iostream>
#include <string>

int main() {
  const std::string s = "hello";
  std::string t = std::move(s);
  std::cout << s << " " << t;
}
