#include <stdio.h>

main() {
  int n, i, result;
  printf("Please provide the value of n: ");
  scanf("%d", &n);
  result = 1;
  i = 1;
  while (i <= n) {
    result = result * i;
    i = i + 1;
  }
  printf("Factorial of %d: %d! = %d", n, n, result);
}
