#include <stdio.h>

int main(){
    int d1, d2, m1, m2, y1, y2;
    printf("Enter first Date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d1, &m1, &y1);
    if (d1 > 31 || d1 < 1 || m1 > 12 || m1 <1 || y1 < 1 || y1 > 9999)
        printf("Well thats some nice Date...");
    else {
        do {
            printf("Enter next Date (dd/mm/yyyy): ");
            scanf("%d/%d/%d", &d2, &m2, &y2);
            if ( d2 == 0 || m2 == 0 || y2 == 0 ){
                printf("\nProgram Finished");
                printf("\n%d/%d/%d is earliest Date", d1, m1, y1);
                return 1;
            }
            else {
            if (y2 < y1){
                d1 = d2;
                m1 = m2;
                y1 = y2;
            }
            else if (y2 == y1 && m2 < m1){
                d1 = d2;
                m1 = m2;
                y1 = y2;
            }
            else if (y2 == y1 && m2 == m1 && d2 < d1){
                d1 = d2;
                m1 = m2;
                y1 = y2;
            }
            }
        } while ( d2 != 0 || m2 != 0 || y2 != 0 );
    }
        return 0;
}
