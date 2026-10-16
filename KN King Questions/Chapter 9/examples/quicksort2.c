#include <stdio.h>
#define N 10

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int a[], int low, int high){
    int pivot = a [high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if (a[j] <= pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i+1], &a[high]);
    return i+1;
}

void quicksort(int a[], int low, int high) {
    if (low >= high)
        return;

    int p = partition(a, low, high);
    quicksort(a, low, p - 1);
    quicksort(a, p + 1, high);
}

int main(void) {
    int a[N] = {9, 2, 7, 1, 8, 3, 5, 6, 4, 0};

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
