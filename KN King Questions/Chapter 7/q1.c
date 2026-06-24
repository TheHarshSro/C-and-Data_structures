#include <stdio.h>
int main() {
    short i, n;
    printf("Enter number of entries in Tables: ");
    scanf("%hd", &n);
    for(i = 1; i <= n; i++){
        printf("%5hd%5hd\n", i, i*i);
    }
    return 0;
}
