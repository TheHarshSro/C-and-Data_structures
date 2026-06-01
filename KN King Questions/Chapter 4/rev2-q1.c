#include<stdio.h>
int main(){
    printf("Enter two digit Number: ");
    int num;
    scanf("%d", &num);
    int a, b;
    a = num % 10;
    b = num / 10;
    printf("%d%d", a,b);
    return 0;
}
