#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int age = get_int ("Enter age: ");

    if (age < 0)
    {
        printf("Invalid Age\n");
    }
    else if (age <= 12)
    {
        printf("Print Child\n");
    }
     else if (age <= 19)
    {
        printf("TeenB\n");
    }
     else if (age <= 59)
    {
        printf("Adult\n");
    }
     else
    {
        printf("Senior\n");
    }
    return 0;
}
