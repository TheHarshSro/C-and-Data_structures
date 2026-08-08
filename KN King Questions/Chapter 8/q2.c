#include <stdio.h>
#include <stdbool.h>

int main(){
    int num, i = 0,
        occur[10] = {0};
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        num = n % 10;
        occur[num]++;
        n /= 10; 
    }

    printf("Digit\t\t: 0 1 2 3 4 5 6 7 8 9\nOccurances\t: ");
    for (i = 0; i <10; i++) {
        printf("%d ", occur[i]);
    }
    return 0;
}
