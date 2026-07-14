#include <stdio.h>

int main(){
    printf("Write an expression: ");
    char sym;
    float num1 = 0, num2 = 0;
    scanf("%f", &num1);

    while ((sym = getchar()) != '\n'){
        switch (sym) {
    
            case '+': 
                scanf("%f", &num2);
                num1 += num2;
                break;
            
            case '-': 
                scanf("%f", &num2);
                num1 -= num2;
                break;
            
            case '*': 
                scanf("%f", &num2);
                num1 *= num2;
                break;
            
            case '/': 
                scanf("%f", &num2);
                num1 /= num2;
                break;

            default: 
                    printf("Use arithmetic operators please");
        }
    }
    
    printf("Value of expression: %.1f", num1);

    return 0;
}
