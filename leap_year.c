#include <stdio.h>

main() {
  int year, n;
  printf("Please provide a year number");
  scanf("%d", &year);
  if (year % 400 == 0) {
    printf("Provided year is a leap year");
  } else if (year % 100 != 0 && year % 4 == 0) {
    printf("Provided year is a leap year");
  } else {
    printf("Provided year is not a leap year");
  }
}
