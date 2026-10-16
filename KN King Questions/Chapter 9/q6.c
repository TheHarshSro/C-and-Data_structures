#include <stdio.h>

int equation(int x){
    int res = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    return res;
}

/* Horner's Rule - idk this, gemini said this better, just adding as remainder.
    int equation(int x) {
    return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    }
 */

int main(void){
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    int res = equation(x);
    printf("\n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %d", res);
    return 0;
}
