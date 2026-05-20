#include <stdio.h>
int main(void) {
  float x;
  printf("Enter x: \n");
  scanf("%f", &x);
  float value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("Value of polynomial is : %.2f", value);
  return 0;
}
