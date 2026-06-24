#include <stdio.h>

int main() {
    char x;
    int ch = 0;

        printf("Enter a line: ");
        x = getchar();
        while (x != '\n') {
            ch++;
            x = getchar();
        }
    printf("\nNumber of words in the Line: %d", ch);

    return 0;
    
}
