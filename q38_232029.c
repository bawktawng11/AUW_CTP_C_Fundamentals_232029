#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int arr[5];
    int sum = 0;

    for (int i=0; i<5; i++)
    {
        arr[i] = get_int("Enter numbers %i: ", i + 1);
    }

    for (int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %i\n", sum);
    return 0;
}
