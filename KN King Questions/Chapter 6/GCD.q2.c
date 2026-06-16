#include <stdio.h>

int main(){
    int m, n, r;
    printf("Enter 2 Integers: ");
    scanf("%d %d", &m, &n);
    if (n == 0) 
        printf("\n%d is GCD", m);
    else{
        while (n != 0) {
            r = m % n;
            m = n;
            n = r;
        }
        printf("%d is GCD", m);
    }
    return 0;
}
