/* Program to compute using Newton's Method of square root */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float x;
    // printf("Enter a Positive Integer: ");
    // scanf("%f", &x);
    
    while (1) {
     printf("Enter a Positive Number: ");
     scanf("%f", &x);
     if (x < 0)
         printf("Enter Positive NUMBER!\n");
     else if (x == '\n')
      break;
    }

    return EXIT_SUCCESS;
}
