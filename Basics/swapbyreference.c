/* KN King Chapter 11 Exercise Q4 */
#include <stdio.h>

void swap(int* p, int*q);
int main() {
    printf("Enter: \n");
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("\nb: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("\na = %d, b = %d", a, b);
    return 0;
}

void swap(int* p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}
