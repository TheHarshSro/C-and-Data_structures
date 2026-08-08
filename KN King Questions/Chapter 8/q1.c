#include <stdio.h>
#include <stdbool.h>

int main(){
    bool seen[10] = {false},
         rep[10] = {false}; //sets all index to false
    int num, i = 0;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0) {
        num = n % 10; //checks last digits
        if (seen[num]) { //checks if any value is not false
            rep[num] = true;
        }
        seen[num] = true; //sets false to true
        n /= 10; //reduces number by dividing by 10
    }
        printf("Repeated Digit(s): ");
        for (i = 0; i < 10; i++){
            if(rep[i])
            printf("%d ", i);
        }
    return 0;
}
