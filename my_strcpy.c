#include <stdio.h>

void strcp(char *source, char *dest);

int main() {
  printf("Enter a String: ");
  char string[500];
  char here[500];
  fgets(string, sizeof(string), stdin);
  strcp(string, here);
  printf("%s", here);
  return 0;
}

void strcp(char *source, char *dest) {
  while (*source != '\0') {
    *dest = *source;
    *dest++;
    *source++;
  }
  *dest = '\0';
}
