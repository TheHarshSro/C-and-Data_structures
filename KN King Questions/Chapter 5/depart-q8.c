#include <stdio.h>
#include <unistd.h>

int main() {
    int h, m;
    int converted;
    printf("\n");
    printf("\tSchedule\n");
    printf("Departure time\tArrival time\n");
    printf("8:00 a.m\t10:16 a.m\n");
    printf("9:43 a.m\t11:52 a.m\n");
    printf("11:19 a.m\t1:31 p.m\n");
    printf("12:47 p.m\t3:00 p.m\n");

    printf("2:00 p.m\t4:08 p.m\n");
    printf("3:45 p.m\t5:55 p.m\n");
    printf("7:00 p.m\t9:20 p.m\n");
    printf("9:45 a.m\t11:58 p.m\n\n");

    sleep(1);
    printf("Enter Time in 24 hour - minutes: ");
    scanf("%d - %d", &h, &m);
    if (h > 24 && h < 0 && m > 59 && m < 0) {
        printf("What kind of time zone you live in?");
    }
    else {
        converted = h * 60 + m;
        if (converted < 480)
            printf("Trains depart after 8:00 a.m");
            else if (converted > 480 && converted < 616)
            printf("Closest Departure Time is 8:00 a.m, arrival at 10:16 a.m"); 
            else if (converted > 583 && converted < 712) 
            printf("Closest Departure Time is 9:43 a.m, arrival at 11:52 a.m");
            else if (converted > 679 && converted < 811)
            printf("Closest Departure Time is 11:19 a.m, arrival at 1:31 p.m");
            else if (converted > 767 && converted < 900)
            printf("Closest Departure Time is 12:47 p.m, arrival at 3:00 p.m");       
            else if (converted > 840 && converted < 968)
            printf("Closest Departure Time is 2:00 p.m, arrival at 4:08 p.m");       
            else if (converted > 945 && converted < 1075)
            printf("Closest Departure Time is 3:45 p.m, arrival at 5:55 p.m");       
            else if (converted > 1140 && converted < 1280)
            printf("Closest Departure Time is 7:00 p.m, arrival at 9:20 p.m");       
            else if (converted > 1305 && converted < 1438)
            printf("Closest Departure Time is 9:45 p.m, arrival at 11:58 p.m");
    }
    
    return 0;
}
