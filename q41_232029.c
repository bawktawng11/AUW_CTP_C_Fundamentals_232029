#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float numbers[5] = {2.3, 3.3, 4.5, 3.5, 3.4};

    printf("Float numbers: ");
    for (int i=0; i<5; i++)
    {
        printf(" %.2f", numbers[i]);
    }
    return 0;
}
