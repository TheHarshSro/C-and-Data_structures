#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    char arr[10][10];
    char alpha[26] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G',
        'H', 'I', 'J', 'K', 'L', 'M', 'N',
        'O', 'P', 'Q', 'R', 'S', 'T', 'U',
        'V', 'W', 'X', 'Y', 'Z'
    };
    int row = 0, col = 0;
    int new_row, new_col;
    int move, k = 1;
    int valid;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            arr[i][j] = '.';

    srand((unsigned) time(NULL));
    arr[0][0] = 'A';

    while (k < 26) {
        move = rand() % 4;
        valid = 0;

        new_row = row;
        new_col = col;

        switch (move) {
            case 0: new_row--; break;
            case 1: new_col++; break;
            case 2: new_col--; break;
            case 3: new_row++; break;
        }

        if (new_row >= 0 && new_row < 10 &&
            new_col >= 0 && new_col < 10 &&
            arr[new_row][new_col] == '.') {

            row = new_row;
            col = new_col;
            arr[row][col] = alpha[k];
            k++;
            valid = 1;
        }

        if (!valid) {
            for (int try = 0; try < 4; try++) {
                new_row = row;
                new_col = col;

                switch (try) {
                    case 0: new_row--; break;
                    case 1: new_col++; break;
                    case 2: new_col--; break;
                    case 3: new_row++; break;
                }

                if (new_row >= 0 && new_row < 10 &&
                    new_col >= 0 && new_col < 10 &&
                    arr[new_row][new_col] == '.') {

                    row = new_row;
                    col = new_col;
                    arr[row][col] = alpha[k];
                    k++;
                    valid = 1;
                    break;
                }
            }
        }

        if (!valid)
            break;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%c ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
