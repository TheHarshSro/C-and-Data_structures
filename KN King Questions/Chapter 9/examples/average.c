#include <stdio.h>

double average(double a, double b){
    return (a + b)/2;
}

int main(){
    double x, y, z;
    printf("Enter 3 Numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Average of %g & %g = %g", x, y, average(x,y));
    printf("Average of %g & %g = %g", y, z, average(y,z));
    printf("Average of %g & %g = %g", x, z, average(x,z));

    return 0;
}
