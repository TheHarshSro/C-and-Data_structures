#include <stdio.h>

int power(int x, int n){
    if (n == 0)
        return 1;

    if (n % 2 == 0){
        int half = power(x, n / 2);
        return half * half;
    }
    else
        return x * power(x, n-1);
}

int main(){
    int x, n;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n\n%d Power %d = %d", x, n, power(x, n));
    return 0;
}
