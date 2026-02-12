#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int arr[5];
    int sum = 0;
    float average;

    for (int i=0; i<5; i++)
    {
        arr[i] = get_int("Enter numbers %i: ", i+1);
    }

    for (int i=0; i<5; i++)
    {
        sum += arr[i];
    }
    printf("Sum: %i\n", sum);
    average = sum/5;
    printf("Average: %.2f\n", average);
    return 0;
}
