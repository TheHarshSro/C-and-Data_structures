#include <stdio.h>
#include <unistd.h>

int main(){
    printf("This program prints table of squares\n");
    sleep(1);
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d's square = %d\n", i, i * i);
    }
    return 0;
}
