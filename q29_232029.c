#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int num1 = get_int ("Enter num1: ");
    int num2 = get_int ("Enter num2: ");

    if (num1 > num2 )
    {
        printf("%d is the large number.\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is the large number.\n", num2);
    }
    else
    {
        printf("Two numbers are equal.\n");
    }

    return 0;
}
