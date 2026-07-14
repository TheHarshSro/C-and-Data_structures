// Adding 2 fractions but user enters arithmetic operators
#include <stdio.h>
int main(void) {
  int num1, den1, num2, den2, res_num, res_den;
  char sym;

  printf("Enter Two fractions seperated arithmetic symbol: ");
  scanf("%d/%d %c %d/%d", &num1, &den1, &sym, &num2, &den2);

    switch (sym) {
        case '+':
            res_num = num1 * den2 + num2 * den1;
            res_den = den1 * den2;
            printf("\nSum of fractions is %d/%d", res_num, res_den);
            break;

        case '-':
            res_num = num1 * den2 - num2 * den1;
            res_den = den1 * den2;
            printf("\nSubtraction of fractions is %d/%d", res_num, res_den);
            break;

        case '*':
            res_num = num1 * num2;
            res_den = den1 * den2;
            printf("\nMultiplication of fractions is %d/%d", res_num, res_den);
            break;

        case '/':
            res_num = num1 * den2;
            res_den = den1 * num2;
            int result = res_num / res_den;
            printf("\nDivision of two fractions is %d", result);
          //  printf("\nDivision of two fractions is %d/%d", res_num, res_den);
            break;

        default:
            printf("\nPlease use valid arithmetic operators!");
            break;
    }

  return 0;
}
