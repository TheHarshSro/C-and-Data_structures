// Adding 2 fractions.
//
#include <stdio.h>
int main(void) {
  int num1, den1, num2, den2, res_num, res_den;

  printf("Enter first fraction: ");
  scanf("%d/%d", &num1, &den1);

  printf("Enter Second Fraction: ");
  scanf("%d/%d", &num2, &den2);
  res_num = num1 * den2 + num2 * den1;
  res_den = den1 * den2;

  printf("Sum of the fractions in: %d/%d", res_num, res_den);
  return 0;
}
