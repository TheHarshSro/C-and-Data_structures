#include <stdio.h>

int main(void) {
  int d, m, y;
  printf("Enter a Date (dd/mm/yyyy format): ");
  scanf("%d/%d/%d", &d, &m, &y);
  if (d > 31 || m > 12 || y > 3000 || d < 1 || m < 1 || y < 1) {
    printf("What timeline you living in buddy?");
  } else if (y < 1950) {
    printf("Someone's sure living in past, here's your date anyways %d%d%d", d,
           m, y);
  } else
    printf("You entered %d%d%d", d, m, y);

  return 0;
}
