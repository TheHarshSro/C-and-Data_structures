#include <stdio.h>

int main(){
    int n, res;
    printf("Enter a number: ");
    scanf("%d", &n);
    int root = 1;
        while (root * root <= n) {
            res = root;
            root++;
        }
    for (int i = 1; i <= res; i++){
        if (i % 2 == 0) 
            printf("\n==>%d", i * i);
    }
    return 0;
}
