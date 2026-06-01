#include<stdio.h>
int main(){
    printf("Enter three digit Number: ");
    int a, b, c;
    scanf("%1d%1d%1d", &a, &b, &c);
    
    a = a + c;
    c = a - c;
    a = a - c;
    
    printf("%d%d%d", a,b,c);
    return 0;
}
