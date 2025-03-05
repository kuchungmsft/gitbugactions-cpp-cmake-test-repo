#include <iostream>
#include "../src/add.h"

void test_add() {
  int result = add(4, 3);
  if (result != 7) {
    std::cerr << "test_add failed: expected 7, got " << result << std::endl;
    exit(1);
  }
}

int main() {
  test_add();
  std::cout << "All tests passed!" << std::endl;
  return 0;
}
