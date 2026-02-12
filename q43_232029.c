#include <stdio.h>
#include <cs50.h>

int main (void)
{
    string name[3];

    for (int i=0; i<3; i++)
    {
        name[i] = get_string("Enter name %i: ", i+1);
    }
    printf("Names\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
