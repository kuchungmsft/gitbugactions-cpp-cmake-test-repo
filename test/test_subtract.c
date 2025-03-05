#include <stdio.h>
#include <stdlib.h>
#include "../src/subtract.hxx"

void test_subtract() {
  int result = subtract(4, 3);
  if (result != 1) {
    printf("test_subtract failed: expected 1, got %d\n", result);
    exit(1);
  }
}

int main() {
  test_subtract();
  printf("All tests passed!\n");
  return 0;
}
