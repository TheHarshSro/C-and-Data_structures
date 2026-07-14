#include <stdio.h>
#include <ctype.h>

int main(){
    int hour, minute, converted;
    char format;

    printf("Enter 12-hour Format Time: ");
    scanf("%d:%d %c", &hour, &minute, &format); 
    if (hour > 12 || hour < 0 || minute > 59 || minute < 0) {
        printf("I said 12hr format buddy");
    }
    else {
        format = toupper(format);
        switch (format) {
            case 'A':
                printf("Equivalent 24-hour time: %d:%2d", hour, minute);
                break;
            case 'P':
                converted = 12 + hour;
                    if (converted == 24) {
                    converted = 00;
                    printf("Equivalent 24-hour time: %d:%2d", converted, minute);
                    }
                    else {
                    printf("Equivalent 24-hour time: %d:%2d", converted, minute);
                    }
                break;
            default:
                printf("Please use Proper Time format!");
        }
    }
    return 0;
}
