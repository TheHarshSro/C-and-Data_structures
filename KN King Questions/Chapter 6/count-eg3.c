#include <stdio.h>

int main() {
    int n;
    int digit = 0;
    printf("Enter non-negative number: ");
    scanf("%d", &n);
    
    do { n /= 10;
        digit++;
    } while ( n > 0 );
    printf("\nThe number has %d digits", digit);
    return 0;
}
