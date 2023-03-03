#include <stdio.h>

main() {
  int n, i, sum;
  printf("Please provide value of n: ");
  scanf("%d", &n);
  sum = 0;
  i = 1;
  sum = 0;
  while (i <= n) {
    sum = sum + i;
    i = i + 1;
  }
  printf("Sum of natural numbers upto %d is: %d", n, sum);
}
