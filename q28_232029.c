#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int ("Enter n numbers: ");
    if (n >= 1 && n <= 100)
    {
        printf("Number is in range\n");
    }
    else
    {
        printf("Number is not in range\n");
    }

    return 0;
}
