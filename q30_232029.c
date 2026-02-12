#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int num1 = get_int ("Enter num1: ");
    int num2 = get_int ("Enter num2: ");
    int num3 = get_int ("Enter num3: ");

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the large number.\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is the large number.\n", num2);
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("%d is the large number.\n", num3);
    }
    else
    {
        printf(" Three numbers are equal.\n");
    }

    return 0;
}
