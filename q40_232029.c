#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int numbers[5];

    for (int i=0; i<5; i++)
    {
        numbers[i] = get_int("Enter numbers %i : ", i+1);
    }
    int largest = numbers[0];

    for (int i=0; i<5; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }
    printf("Largest %d", largest);
    return 0;
}
