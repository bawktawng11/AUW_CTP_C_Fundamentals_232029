#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float height = get_float("Enter your height: ");
    printf("My height is %.2f\n", height);
    return 0;
}
