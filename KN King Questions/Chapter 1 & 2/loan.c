#include <stdio.h>

int main() {
  float l, ir, mp;

  printf("Enter your Loan Amount: ");
  scanf("%f", &l);
  printf("Enter interest Rate: ");
  scanf("%f", &ir);
  printf("Enter monthly payment: ");
  scanf("%f", &mp);

  float itr = (ir / 100) / 12;
  float first = l + (l * itr) - mp;
  float second = first + (first * itr) - mp;
  float third = second + (second * itr) - mp;
  printf("\nBalance after first payment: %.2f", first);
  printf("\nBalance after second payment: %.2f", second);
  printf("\nBalance after third payment: %.2f", third);

  return 0;
}
