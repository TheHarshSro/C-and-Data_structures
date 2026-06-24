#include <stdio.h>

int main() {
    double n, sum = 0;
    printf("Prints sum of series of length: ");
    printf("\nEnter integers - 0 to terminate: ");
    scanf("%lf", &n);
    while (n != 0 ) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("\nThe sum is: %.3lf", sum);
    return 0;
}
