#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int arr[5];

    for (int i=0; i<5; i++)
    {
        arr[i] = get_int("Enter number %i:", i+1);
    }

    printf("You entered: ");
    for (int i=0; i<5; i++)
    {
        printf(" %i", arr[i]);
    }
    printf("\n");
    return 0;
}
