#include <stdio.h>

int main(int argc, char *argv[])
{
    int a, b;
    a = b = 0;
    printf("This program finds the greatest number in series entered: \n");
    do {
        printf("Enter a number: ");
        scanf("%d", &a);
        if (a > b) {
            b = a;
        }
    } while (a != 0);
    printf("\n%d is largest value entered.", b);
    
    return 0;
}
