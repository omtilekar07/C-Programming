
#include <stdio.h>

int main()
{
    int choice;
    float side, length, breadth, base, height;
    float radius, area;
    const float PI = 3.14;

    printf("----- AREA CALCULATOR -----\n");
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("4. Area of Circle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter side: ");
            scanf("%f", &side);

            area = side * side;
            printf("Area of Square = %.2f", area);
            break;

        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);

            area = length * breadth;
            printf("Area of Rectangle = %.2f", area);
            break;

        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);

            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f", area);
            break;

        case 4:
            printf("Enter radius: ");
            scanf("%f", &radius);

            area = PI * radius * radius;
            printf("Area of Circle = %.2f", area);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
