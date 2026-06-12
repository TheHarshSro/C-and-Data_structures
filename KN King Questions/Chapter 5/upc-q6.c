#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check, first_sum, second_sum, total;

    printf("Enter first single digit: ");
    scanf("%1d", &d);
    printf("Enter first group five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("Enter second group of five digits with Check digit: ");
    scanf("%1d%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5, &check);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    if (check == 9 - ((total - 1) % 10))
        printf("VALID");
    else
     printf("INVALID");



    return EXIT_SUCCESS;
}
