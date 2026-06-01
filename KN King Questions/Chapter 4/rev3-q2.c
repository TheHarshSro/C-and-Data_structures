#include<stdio.h>
int main(){
    printf("Enter three digit Number: ");
    int num;
    scanf("%d", &num);
    int a, b, c;
    a = (num % 100) % 10;
    b = (num % 100) / 10;
    c = num / 100;
    printf("%d%d%d", a,b,c);
    return 0;
}
