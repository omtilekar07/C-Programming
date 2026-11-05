
#include <stdio.h>

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 25; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    printf("Sum of even numbers from 1 to 25 = %d", sum);

    return 0;
}
