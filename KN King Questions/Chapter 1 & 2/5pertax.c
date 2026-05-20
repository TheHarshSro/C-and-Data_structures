#include <stdio.h>
int main(void) {
  float rupee;
  float paise;
  printf("Enter your amount in Rupees and paise: \n");
  scanf("%f %f", &rupee, &paise);

  float paise2 = paise / 100;
  // percentage = (part/whole) * 100;
  rupee += paise2;
  float tax = rupee + ((5 * rupee) / 100);
  printf("After 5%% tax: %.2f", tax);
  return 0;
}
