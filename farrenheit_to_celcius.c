#include <stdio.h>

main() {
  float c, f;
  printf("Please provide farrenheit temperature: ");
  scanf("%f", &f);
  c = 5 * (f - 32) / 9;
  printf("%f", c);
}
