//Convert an decimal to its binary equivalent using a bitwise operator

#include <stdio.h>

int main() {
  int decimal = 7;
  int binary = 0;
  int base = 1;

  while (decimal > 0) {
    int bit = decimal & 1;
    binary += bit * base;
    base *= 10;
    decimal >>= 1;
  }

  printf("The binary equivalent of %d is %d\n", decimal, binary);

  return 0;
}
