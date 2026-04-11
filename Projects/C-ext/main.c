#include <stdio.h>

int main(int argc,char *argv[]) {
    if (argc < 2){
        printf("Usage %s <filename>", argv[0]);
        return 1;
    }

    FILE *fptr = fopen(argv[1], "r");

    if(fptr){
        printf("The file '%s' already exists", argv[1]);
        fclose(fptr);
    } else {
        fptr = fopen(argv[1], "w");
        if(fptr) {
            printf("%s created.", argv[1]);
            fclose(fptr);
        } else {
            printf("Error creating file.");
        }
    }
    return 0;
}
