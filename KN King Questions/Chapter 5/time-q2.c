#include <stdio.h>
int main(int argc, char *argv[])
{
    int hour, min;
    printf("Please Enter Time in 24hr Format - hh:mm -> ");
    scanf("%d:%d", &hour, &min);
    if (hour < 13 && min < 61){
        printf("Time: %d:%d AM", hour, min);
    }
    else if (hour > 12) {
        switch (hour) {
        case 13: printf("Time: 1:%2d PM", min); break;
        case 14: printf("Time: 2:%2d PM", min); break;
        case 15: printf("Time: 3:%2d PM", min); break;
        case 16: printf("Time: 4:%2d PM", min); break;
        case 17: printf("Time: 5:%2d PM", min); break;
        case 18: printf("Time: 6:%2d PM", min); break;
        case 19: printf("Time: 7:%2d PM", min); break;
        case 20: printf("Time: 8:%2d PM", min); break;
        case 21: printf("Time: 9:%2d PM", min); break;
        case 22: printf("Time: 10:%2d PM", min); break;
        case 23: printf("Time: 11:%2d PM", min); break;
        case 24: printf("Time: 12:%2d PM", min); break;
        }
    }
    else if (hour < 0 || hour > 24 || min < 0 || min > 60)
        printf("Genuinely interest to know what time format your planet uses...");
    return 0;
}
