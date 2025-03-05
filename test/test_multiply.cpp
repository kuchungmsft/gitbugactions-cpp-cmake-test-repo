#include <iostream>
#include "../src/multiply.hpp"

void test_multiply() {
  int result = multiply(4, 3);
  if (result != 12) {
    std::cerr << "test_add failed: expected 12, got " << result << std::endl;
    exit(1);
  }
}

int main() {
  test_multiply();
  std::cout << "All tests passed!" << std::endl;
  return 0;
}
