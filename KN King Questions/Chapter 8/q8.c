#include <stdio.h>

int main(void) {
    int matrix[5][5];
    char names[5][10] = {"Deku", "Shoto", "Bakugo", "Iida", "Denki"};
    int i, j, Rsum = 0, Csum = 0;
    int small, large;
    for (i = 0; i < 5; i++){
        printf("Enter Quiz Grades for %s: ", names[i]);
        for (j = 0; j < 5; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    // Individual Student marks in each quiz sequentially
    printf("\n\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++) {   
            Rsum += matrix[i][j];
        }
        printf("%s Total - %d, Average - %d\n", names[i], Rsum, (Rsum / 5));
        Rsum = 0;
    }

    // Score comparison of each quiz sequentially
    printf("\n");
    for (j = 0; j < 5; j++){
                large = matrix[0][j];
                small = matrix[0][j];

    for (i = 0; i < 5; i++) {
            Csum += matrix[i][j];
                if (matrix[i][j] > large)
                    large = matrix[i][j];
                if (matrix[i][j] < small)
                    small = matrix[i][j];
        }
        printf("Quiz %d Total = %d, Average = %d\n", j+1, Csum, (Csum / 5));
        printf("\tHighest Marks: %d, Lowest Marks: %d\n", large, small);

        Csum = 0;
    }

    return 0;
}
