#include <stdio.h>
#include <cs50.h>

void add (void);

int main (void)
{
    add ();
    return 0;
}

void add (void)
{
    int num1 = get_int("Enter num1: ");
    int num2 = get_int("Enter num2: ");

    printf("Sum = %d\n", num1 + num2);
}

