#include <stdio.h>
int main(void) {
  float x;
  printf("Enter x: \n");
  scanf("%f", &x);
  float value = (3 * x * x * x * x * x) + (2 * x * x * x * x) -
                (5 * x * x * x) - (x * x) + (7 * x) - 6;
  printf("Value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 : %.2f", value);
  return 0;
}
