#include <stdio.h>
#include <string.h>
struct student {
  int id;
  char name[25];
};

int main() {
  struct student data[5];
  data[0].id = 1;
  strcpy(data[0].name, "Aman Thakur");
  printf("%d - %s", data[0].id, data[0].name);
  return 0;
}
