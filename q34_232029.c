#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int age = get_int ("Enter age: ");
    int citizenship = get_int ("Enter citizenship (1 = Yes, 0 = No): ");

    if (age >= 18)
    {
        if (citizenship == 1)
        {
            printf("Eligible to Vote\n");
        }
        else
        {
            printf("Not eligible to Vote\n");
        }
    }
    else
    {
        printf("Not Eligible\n");
    }

    return 0;
}
