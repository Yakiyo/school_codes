#include <stdio.h>

main() {
  float radius, area;
  printf("Provide radius of circle: ");
  scanf("%f", &radius);
  area = 3.1416 * radius * radius;
  printf("%.2f", area);
}
