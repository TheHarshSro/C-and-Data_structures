#include <stdio.h>
#define FLAG 1
#define VAL 2

int main() {
#if FLAG
  printf("Flag mode");
#endif

#if VAL >= 2
  printf("\nnew ver");
#endif

#if VAL
  printf("\nBruh");
#endif

#define DEBUG 1

#if defined(DEBUG)
  printf("\nReeeeeeeee");
#endif

#if defined DEBOG
  printf("\nnooooo");
#endif

#define CHOCO 1
#define COOKIE 1

#if CHOCO
  printf("\nChocolate\n");
#endif

#undef CHOCO

#define CHOCO 0
#if CHOCO
  printf("\nChocolate\n");
#elif COOKIE
  printf("Milk & Cookies :)");
#endif

#define WINDOWS 1
#ifndef WINDOWS
#error WINDOWS NOT DEFINED LMAO
#endif

/*
#ifndef NOTDEFINED_MACRO
#error GIVES THIS COMPILATION error
#endif
*/

  return 0;
}
