#include <stdio.h>
int main(){
    
float radius, height, volume;
const float PI = 3.14;

printf("Enter radius: ");
scanf("%f", &radius);

printf("Enter height: ");
scanf("%f", &height);

volume = PI * radius * radius * height;

printf("Volume of Cylinder = %.2f", volume);

return 0;
}