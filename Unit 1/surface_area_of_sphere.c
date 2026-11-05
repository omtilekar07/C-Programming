#include <stdio.h>
int main(){
    
float radius, area;
const float PI = 3.14;

printf("Enter radius: ");
scanf("%f", &radius);

area = 4 * PI * radius * radius;

printf("Surface Area of Sphere = %.2f", area);

return 0;
}