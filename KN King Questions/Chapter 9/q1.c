#include <stdio.h>
#define N 10

void selection(int a[], int n){

    if ( n <= 1)
        return;
    int largest = 0;
    int temp;
    
    for(int i = 0; i < n; i++){
        if( a[i] > a[largest] )
            largest = i;
    }

    temp = a[largest];
    a[largest] = a[n - 1];
    a[n - 1] = temp;

    selection(a, n - 1);
}

int main(){
    int a[N];

    printf("Enter %d Numbers: ", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    selection(a, N);

    printf("\nSorted Number: ");
    for(int i = 0; i < N; i++)
        printf("%d ", a[i]);

    return 0;
}
