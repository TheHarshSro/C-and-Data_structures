#include <stdio.h>

int main() {
    int day, n, weekdays, i;
    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("\nEnter starting day in week -> 1 for Sun, 7 for Mon: ");
    scanf("%d", &weekdays);

    printf("\n Mo Tu We Th Fr Sa Su\n");
    for (i = 1, day = 1; i <= n + weekdays - 1; i++) {
        if (i < weekdays)
            printf("   ");
        else
            printf("%3d", day++);
        if (i % 7 == 0)
            printf("\n");
    }
        printf("\n");
        return 0;
}
