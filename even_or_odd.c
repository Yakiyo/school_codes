#include <stdio.h>

main() {
  int n;
  printf("Please provide a number: ");
  scanf("%d", &n);
  if (n % 2 == 0) {
    printf("The number is even");
  } else {
    printf("The number is odd");
  }
}
