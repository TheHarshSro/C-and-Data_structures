#include <stdio.h>
int main(int argc, char *argv[])
{
    int a, b, num, dnum, rem;
    printf("Enter numerator and denominatior (p/q): ");
    scanf("%d/%d", &a, &b);
    int gcd;
    num = a;
    dnum = b;
    if (dnum == 0 )
        gcd = num;
    else {
        while (dnum != 0) {
        rem = num % dnum;
        num = dnum;
        dnum = rem;
        }
        gcd = num;
    }
    printf("\nIn lowest terms: %d/%d", a/gcd, b/gcd);
    return 0;
}
