#include <stdio.h>
int main() {
    printf("Int - %d bytes\nShort Int - %d bytes\nLong Int - %d bytes\n", sizeof(int), sizeof(short), sizeof(long));
    printf("Float - %d bytes\nDouble - %d bytes\nLong Double - %d bytes\n", sizeof(float), sizeof(double), sizeof(long double));
    return 0;
}
