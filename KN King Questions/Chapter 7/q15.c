#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, fact = 1;
    printf("Enter a positive Integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        fact *= i;
    }
    
    printf("Factorial of %d = %d", n, fact);
    return 0;
}
