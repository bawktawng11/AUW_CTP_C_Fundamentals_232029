#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float temperature = get_float("Enter Temperature: ");

    if (temperature < 20)
    {
        printf("Cold\n");
    }
    else if (temperature < 30)
    {
        printf("Warm\n");
    }
    else
    {
        printf("Hot\n");
    }

    return 0;
}
