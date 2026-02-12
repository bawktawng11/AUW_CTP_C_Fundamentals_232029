#include <stdio.h>
#include <cs50.h>

int main (void)
{
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=6; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
