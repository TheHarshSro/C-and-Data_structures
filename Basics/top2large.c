#include <stdio.h>
#define N 5

void find_two_largest(int a[], int n, int *l, int *sl);

int main(){
    int arr[N], large, slarge;
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    find_two_largest(arr, N, &large, &slarge);
    printf("\nLargest: %d, Second Largest: %d", large, slarge);
    return 0;
}

void find_two_largest(int a[], int n, int *l, int *sl){
    *l = *sl = a[0];
    for(int i = 0; i<n; i++){
        if (a[i] > *l){
            *sl = *l;
            *l = a[i];
        }
        else if (a[i] > *sl && a[i] != *l)
            *sl = a[i];
    }
}
