#include <stdio.h>
int main(){
    
int a, b, c, d, sum;
float average;

printf("Enter four integers: ");
scanf("%d %d %d %d", &a, &b, &c, &d);

sum = a + b + c + d;
average = sum / 4.0;

printf("Sum = %d\n", sum);
printf("Average = %.2f", average);

return 0;
}