#include <stdio.h>
#include <cs50.h>

void check (int num);

int main (void)
{
    int number = get_int ("Enter number: ");
    check(number);
    return 0;
}

void check (int num)
{
    if (num % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

