#include <stdio.h>

int main(void) {
    int matrix[5][5];
    int i, j, Rsum = 0, Csum = 0;
    for (i = 0; i < 5; i++){
        printf("Enter row %d: ", i+1);
        for (j = 0; j < 5; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\nRow Totals: ");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++) {   
            Rsum += matrix[i][j];
        }
        printf("%3d ", Rsum);
        Rsum = 0;
    }

    printf("\nColumn Totals: ");
    for (j = 0; j < 5; j++){
        for (i = 0; i < 5; i++) {   
            Csum += matrix[i][j];
        }
        printf("%3d ", Csum);
        Csum = 0;
    }

    return 0;
}
