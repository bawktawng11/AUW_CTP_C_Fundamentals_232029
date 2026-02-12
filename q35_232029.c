#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int year = get_int ("Enter year: ");

    if (year <= 0)
    {
        printf("Invalid Year\n");
    }
    else
    {
        if (year % 400 == 0)
        {
            printf("Leap year\n");
        }
        else if (year % 100 == 0)
        {
            printf("Not Leap year\n");
        }
        else if (year % 4 == 0)
        {
            printf("Leap year\n");
        }
        else
        {
            printf("Not Leap year\n");
        }
    }

    return 0;
}
