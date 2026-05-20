#include <stdio.h>

int main() {
  float r;
  float PI = 3.14f;
  printf("Enter Radius: \n");
  scanf("%f", &r);
  float v = 4.0f / 3.0f * PI * r * r * r;
  printf("%.1f", v);
  return 0;
}
