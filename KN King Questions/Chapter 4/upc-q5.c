#include <stdio.h>
// UPC code is 0    13800 15173    5

int main(){

        int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, sum1, sum2, total;

        printf("Enter UPC Code: ");
        scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", &d, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10);
        /*The one in %1d means read one character at time and move on so it can take continuous input instead of single unit*/

        sum1 = d + i2 + i4 + i6 + i8 + i10;
        sum2 = i1 + i3 + i5 + i7 + i9;
        total = 3 * sum1 + sum2;

        printf("Check Digit = %d", 9 - ((total - 1)%10) );

    return 0;
}