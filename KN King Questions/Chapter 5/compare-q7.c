#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Enter 4 Integers: ");
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int greatest, smallest;   
    greatest = smallest = a;
    if (a == b && b == c && c == d) {
        printf("Alright Genius...");
    }
    else {
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;
    if (d < smallest) smallest = d;

    if (b > greatest) greatest = b;
    if (c > greatest) greatest = c;
    if (d > greatest) greatest = d;

    printf("\nLargest: %d", greatest);
    printf("\nSmallest: %d", smallest);
    }
    return EXIT_SUCCESS;
}
