#include <stdio.h>

void ToBePaid();

int main() {
  ToBePaid();
  return 0;
}

void ToBePaid() {
  int rupees;
  printf("Enter amount of Rupees (without paise): ");
  scanf("%d", &rupees);

  int note20 = rupees / 20;        // number of notes of 20;
  rupees = rupees - (20 * note20); // lets say this mf gives me remaining amount
  int note10 = rupees / 10; // number of notes of 10 coming from new rupees
  rupees = rupees - (10 * note10);
  int note5 = rupees / 5;
  rupees = rupees - (5 * note5);
  int note1 = rupees / 1;
  rupees = rupees - (1 * note1);

  printf("\n\nRs 20 Notes: %d\n", note20);
  printf("Rs 10 Notes: %d\n", note10);
  printf("Rs 5 Notes: %d\n", note5);
  printf("Rs 1 Notes: %d\n", note1);
}
