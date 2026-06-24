#include <stdio.h>

int main() {
    int i, n;
    printf("Enter number of entries: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
            if ( i % 24 != 0) 
            printf("%d  ---  %d\n", i, i * i);
            else{
            printf("%d  ---  %d", i, i * i);
            printf("\nPress any key to continue your table!");
            while (getchar() != '\n');
            getchar();
        }

/*       if (i % 24 == 0) {
            printf("\nPress any key to continue your table!");
            printf("\n%d --- %d", i, i * i);
            getchar();
        }
        else {
        printf("\n%d  ---  %d", i, i * i);
        }
  */
        }
    return 0;
}
