#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int ("Enter n numbers: ");
    if (n==0)
    {
        printf("Zero\n");
    }
    else if (n%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    return 0;
}
