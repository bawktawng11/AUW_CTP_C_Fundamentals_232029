#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("Multiplication table of 5\n");
    for(int i=1; i<=10; i++)
    {
        printf("5 * %d = %d\n", i, i*5);
    }
    return 0;
}
