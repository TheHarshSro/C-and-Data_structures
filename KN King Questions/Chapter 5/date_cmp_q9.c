#include <stdio.h>

int main(){
    int d1, d2, m1, m2, y1, y2;
    printf("Enter first Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    if (d1 > 31 && d1 < 1 && m1 > 12 && m1 <1 && y1 > 2100 && y1 < 1700)
        printf("Well thats some nice Date...");


    printf("Enter second Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d2, &m2, &y2);
    if (d2 > 31 && d2 < 1 && m2 > 12 && m2 <1 && y2 > 2100 && y2 < 1700)
        printf("Well thats some nice Date...");

    if (y1 > y2) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
    }
    else if (y2 > y1) {
        printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
    }
    else if (y1 == y2) {
            if (m1 > m2) {
                printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
            }
            else if (m2 > m1) {
                printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
            }
            else if (m1 == m2) {
                if (d1 > d2) {
                    printf("%d/%d/%d is earlier than %d/%d/%d", d2, m2, y2, d1, m1, y1);
                }
                else if (d2 > d1)
                    printf("%d/%d/%d is earlier than %d/%d/%d", d1, m1, y1, d2, m2, y2);
                else if (d1 == d2)
                        printf("Same Dates");
            }
    }
    return 0;
}
