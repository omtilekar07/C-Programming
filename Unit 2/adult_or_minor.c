
#include <stdio.h>
int main(){

int age;
printf("Enter your age: ");
scanf("%d", &age);

if (age >= 18)
{
printf("Person is Adult");
}
else
{
printf("Person is Minor");
}

return 0;
}
