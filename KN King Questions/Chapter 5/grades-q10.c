#include <stdio.h>

int main() {
MARKS:
    printf("Enter your Grades [0 - 100]: ");
    int x;
    scanf("%d", &x);
    int m = x / 10;
    switch (m) {
        case 0: printf("Failed"); break;
        case 1: printf("Failed"); break;
        case 2: printf("Failed"); break;
        case 3: printf("Failed"); break;
        case 4: printf("Failed"); break;
        case 6: printf("Letter Grade: D"); break;
        case 7: printf("Letter Grade: C"); break;
        case 8: printf("Letter Grade: B"); break;
        case 9: printf("Letter Grade: A"); break;
        case 10: switch (x % 10) {
                     case 0: printf("Letter Grade: O"); break;
                     default: printf("lmao"); break;
        }
                break;
        default: printf("Error: Enter Correct Marks bbg :)\n");
        goto MARKS;
    }
    return 0;
}
