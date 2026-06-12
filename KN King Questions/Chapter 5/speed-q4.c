#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int wind;
    printf("Enter speed of wind (in knots): ");
    scanf("%d", &wind);

    if (wind < 1) {
        printf("Calm");    
    }
    else if (wind >= 1 && wind <=3) {
        printf("Light air");
    }
    else if (wind >= 4 && wind <=27) {
        printf("Breeze");
    }
    else if (wind >= 28 && wind <=47) {
        printf("Gale");
    }
    else if (wind >= 48 && wind <=63) {
        printf("Storm");
    }
    else if (wind > 63) {
        printf("Hurricane");
    }
        
    return EXIT_SUCCESS;
}
