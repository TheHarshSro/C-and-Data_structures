#include <stdio.h>
#define N 10
int main(){
    int a[N];
    printf("Enter 10 numbers: ");
    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Reverse Order: ");
    for (int i = N - 1; i>=0; i--)
        printf("%d ", a[i]);

    return 0;
}
