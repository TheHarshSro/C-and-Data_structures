#include<stdio.h>
int main(){
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, check;
    printf("Enter your EAN DIGIT: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);
    int sum1 = i2 + i4 + i6 + i8 + i10 + i12;
    int sum2 = i1 + i3 + i5 + i7 + i9 + i11;
    int total = 3 * sum1 + sum2;
    check = 9 - ((total - 1) % 10);
    printf("%d", check);
    return 0;
}
