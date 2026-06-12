#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("Enter your income: ");
    float income;
    scanf("%f", &income);

    if (income <= 0) 
        printf("Find a job!");
    else if (income < 750)
        printf("Tax: %.2f", (1.0 / 100) * income);
    else if (income >= 750 && income < 2250 )
        printf("Tax: %.2f", 7.5f + (( 2.0 / 100) * 750));
    else if (income >= 2250 && income < 3750)
        printf("Tax: %.2f", 37.50f + ((3.0 / 100) * 2250));
    else if (income >= 3750 && income < 5250 )
        printf("Tax: %.2f", 82.50f + ((4.0/100) * 3750));
    else if (income >= 5250 && income < 7000 )
        printf("Tax: %.2f", 142.50f + ((5.0/100) * 5250));
    else if (income >= 7000 )
        printf("Tax: %.2f", 230.00f + ((6.0/100) * 7000));
   
    return EXIT_SUCCESS;
}
