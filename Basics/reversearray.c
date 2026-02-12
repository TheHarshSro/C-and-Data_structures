#include <stdio.h>
#define N 5


int rev();
int arr[N], i;


int main() {
    rev();
    return 0;
}

int rev() {
    printf("Enter 5 numbers:");

    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nReversing the array: ");
    for (i = N-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

