#include <stdio.h>

main() {
  int i, n, sum;
  printf("Provide value of n: ");
  scanf("%d", &n);
  i = 1; 
  sum = 0;
  while (i <= n) {
    sum = sum + i;
    i = i + 2;
  }
  printf("%d", sum);
}
