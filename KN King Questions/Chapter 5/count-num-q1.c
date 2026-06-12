#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 10) {
        printf("%d has 1 digit", num);
    }
    else if (num > 10 && num < 100) {
        printf("%d has 2 digits", num);
    }
    else if (num > 100 && num < 1000) {
        printf("%d has 3 digits", num);
    }

    return 0;
}
