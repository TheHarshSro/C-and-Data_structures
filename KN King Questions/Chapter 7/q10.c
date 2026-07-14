#include <stdio.h>
#include "ctype.h"

int main(){
    int x = 0;
    char f;
    printf("Enter a sentence: ");
    do {
    scanf("%c", &f);
    f = toupper(f);
        if (f == 'A' || f == 'E' || f == 'I' || f == 'O' || f == 'U') {
            x++;
        }
    }while (f != '\n');
    printf("There are %d vowels in the sentence", x);

    return 0;
}
