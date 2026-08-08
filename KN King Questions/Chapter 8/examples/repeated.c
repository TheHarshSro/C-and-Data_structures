#include <stdio.h>
#include <stdbool.h>

int main(){
    bool seen[10] = {false}; //sets all index to false
    int num;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        num = n % 10; //checks last digits
        if (seen[num]) //checks if any value is not false
            break;
        seen[num] = true; //sets false to true
        n /= 10; //reduces number by dividing by 10
    }
    if (n > 0)
        printf("Repeated Digit\n");
    else
        printf("No repeated Digits");

    return 0;
}
