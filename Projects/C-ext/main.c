#include <stdio.h>

int main(int argc, char *argv[]){
    FILE *fptr;
    if (argc > 1) {
        if (argv[1] == 0) {
             fptr = fopen(argv[1], "w");
                if (fptr) {
                    fclose(fptr);
            }
        }
        else {
            fptr = fopen(argv[1], "w");
            fprintf(fptr, "This file already exists");
            fclose(fptr);
        }
    }
    return 0;
}
