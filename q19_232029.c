#include <stdio.h>
#include <cs50.h>

int main (void)
{
    for(int i=50; i>=0; i-=5)
    {
        printf("Numbers from 50 to 0: %d\n", i);
    }
    return 0;
}
