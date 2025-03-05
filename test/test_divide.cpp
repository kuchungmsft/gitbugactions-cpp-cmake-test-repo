#include <iostream>
#include "../src/divide.hh"

void test_divide() {
  double result = divide(6, 4);
  if (result != 1.5) {
    std::cerr << "test_divide failed: expected 1.5, got " << result << std::endl;
    exit(1);
  }
}

int main() {
  test_divide();
  std::cout << "All tests passed!" << std::endl;
  return 0;
}
