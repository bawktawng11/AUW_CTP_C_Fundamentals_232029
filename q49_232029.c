#include <stdio.h>
#include <cs50.h>

void max (void);

int main (void)
{
    max();
    return 0;
}

void max (void)
{
    int num1 = get_int ("Enter num1: ");
    int num2 = get_int ("Enter num2: ");

    if (num1 > num2)
    {
        printf("Maximum = %d\n", num1);
    }
    else
    {
        printf("Maximum = %d\n", num2);
    }
}

