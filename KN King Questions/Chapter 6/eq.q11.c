#include <stdio.h>

int main(){
 int i, denom, n;
 float e;
    printf("Enter value for 'n': ");
    scanf("%d", &n);
    /*
     1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
     */
    for(i = 1, denom = 1, e = 1.0f; i <= n; i++)
        e += 1.0f / (denom *= 1);

    printf("e: %f\n", e);
    return 0;

}
