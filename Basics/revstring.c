#include "stdio.h"
#define MAX 15

int main() {
    char name[MAX];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s\n", name);
    
    printf("Reversed Name:");
    for (int i = MAX-1; i >= 0; i--) {
        printf("%c", name[i]);
    }

    return 0 ;
}
