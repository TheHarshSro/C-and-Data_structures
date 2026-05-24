#include <stdio.h>

int main() {
  int pre, idn, code, num, digit;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &pre, &idn, &code, &num, &digit);

  printf("GS1 Prefix: %d\n", pre);
  printf("Group Identifier: %d\n", idn);
  printf("Publisher Code: %d\n", code);
  printf("Item Number: %d\n", num);
  printf("Check Digit: %d\n", digit);
  return 0;
}
