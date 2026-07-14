#include <stdio.h>
int main(){
    char name, c;
    printf("Enter first and last name: ");
    scanf(" %c", &name);

    while ((c = getchar()) != ' ');
    while ((c = getchar()) == ' ');
    do {
        putchar(c);
    }while ((c = getchar()) != '\n' && c != ' ');

    printf(", %c", name);
    return 0;
}
