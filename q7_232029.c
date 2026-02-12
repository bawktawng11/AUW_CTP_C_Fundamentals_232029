#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int age = get_int("Enter your age: ");
    float height = get_float("Enter your height: ");
    char grade = get_char("Enter your grade: ");

    printf("My age is %d, my height is %.2f, and my grade is %c.\n", age, height, grade);
    return 0;
}
