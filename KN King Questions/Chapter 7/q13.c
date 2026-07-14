#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float words = 0,
        wcount = 1;
    char c;

    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\n')
            wcount++;
        else
            words++;   
    }

    float average = words / wcount;   
    // printf("words vs word count - %.1f - %.1f", words, wcount);
    printf("Average word length: %.1f", average);
    return EXIT_SUCCESS;
}
