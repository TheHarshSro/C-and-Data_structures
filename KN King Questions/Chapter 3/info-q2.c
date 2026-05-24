#include <stdio.h>
int main(void) {
  int item, d, m, y;
  float price;

  printf("Enter Item Number: ");
  scanf("%d", &item);
  printf("Enter Unit Price: ");
  scanf("%f", &price);
  printf("Enter Date of purchase (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &d, &m, &y);

  if (d < 1 || price < 1 || d < 1 || m < 1 || y < 2025) {
    printf("Duhh, put proper value, maybe check the year cause you cant buy "
           "something in past...");
  } else {
    printf("Item\t\tUnit\t\tPurchase\n");
    printf("    \t\tPrice\t\tDate\n");
    printf("\n%d  \t\t$%.2f \t\t %d/%d/%d", item, price, d, m, y);
  }
  return 0;
}
