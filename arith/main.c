#include <stdio.h>
#include"arith.h"

int main(int argc, char const *argv[]) {
  /* ad */
  printf("Sum : %d\n", add(10, 20) );
  printf("Difference : %d\n", sub(10, 20));
  printf("Product : %d\n", prod(10, 20) );
  printf("Quotient : %d  ;Remainder : %d\n", quot(10, 20), rem(10, 20));
  return 0;
}
