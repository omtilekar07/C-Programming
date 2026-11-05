#include <stdio.h>
int main(){
double a, b;
double sum, difference, product, quotient;

printf("Enter two integers: ");
scanf("%lf %lf", &a, &b);

sum = a + b;
difference = a - b;
product = a * b;
quotient = a / b;

printf("Sum = %.2lf\n", sum);
printf("Difference = %.2lf\n", difference);
printf("Product = %.2lf\n", product);
printf("Quotient = %.2lf\n", quotient);

return 0;
}