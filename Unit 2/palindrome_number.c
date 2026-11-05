
#include <stdio.h>

int main()
{
    int num, original, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    do
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    while (num != 0);

    if (original == reverse)
    {
        printf("Palindrome Number");
    }
    else
    {
        printf("Not a Palindrome Number");
    }

    return 0;
}
