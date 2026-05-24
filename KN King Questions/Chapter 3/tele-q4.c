#include <stdio.h>
int main() {
  long num;
  printf("Enter phone number (10 digits): ");
  scanf("%ld", &num);

  printf("You entered: (%ld) %ld - %ld", num / 10000000,
         (num % 10000000) / 10000, num % 10000);
  return 0;
}
