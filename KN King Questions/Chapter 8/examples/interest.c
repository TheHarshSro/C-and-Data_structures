#include <stdio.h>
#define INI_BAL 100.00
#define NUM_RATE ((int) (sizeof(value) / sizeof(value[0])))

int main(){
    int year, num_years, low_rate, i;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (i = 0; i < NUM_RATE; i++){
        printf("%6d%%", low_rate + i);
        value[i] = INI_BAL;
    }
    printf("\n");

    for(year = 1; year <= num_years; year++) {
        printf("%3d   ", year);
        for (i = 0; i < NUM_RATE; i++){
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
