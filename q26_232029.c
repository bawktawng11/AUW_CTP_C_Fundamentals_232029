#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int ("Enter n numbers: ");
    if (n>0)
    {
        printf("Positive\n");
    }
    else if (n<0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}
