#include <stdio.h>

int main() {
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("\n");
    do {
        printf("%d", num % 10);
        num /= 10;
    } while (num % 10 != 0) ;

    return 0;
}
