#include <stdio.h>
int main() {
    printf("This programs sums entered integers\n");
    int n; 
    int sum = 0;
    printf("Enter Number of integer (0 to exit): ");
    scanf("%d", &n);
    while (n != 0) {
        sum += n;
        scanf("%d", &n);
    }
    printf("The sum = %d", sum);
    return 0;
}
