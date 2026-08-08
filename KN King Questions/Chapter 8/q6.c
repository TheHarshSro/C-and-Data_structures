#include <stdio.h>
#include <ctype.h>
#define size 100

int main(void){
    char words[size];
    printf("Enter message: ");
    fgets(words, sizeof(words), stdin);
    
    for (int i = 0; words[i] != '\0'; i++) {
        words[i] = toupper(words[i]);
    }
    printf("In B1FF-speak: ");
    for (int i = 0; words[i] != '\0'; i++) {
        switch (words[i]) {
            case 'A': printf("4"); break;
            case 'B': printf("8"); break;
            case 'E': printf("3"); break;
            case 'I': printf("1"); break;
            case 'O': printf("0"); break;
            case 'S': printf("5"); break;
            default:  printf("%c", words[i]); break;
        }
    }

    return 0;
}
