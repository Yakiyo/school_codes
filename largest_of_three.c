#include <stdio.h>

main() {
  int a, b, c;
  printf("Print 3 numbers: ");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c) {
    printf("%d", a);
  } else if (b > c) {
    printf("%d", b);
  } else {
    printf("%d", c);
  }
}
