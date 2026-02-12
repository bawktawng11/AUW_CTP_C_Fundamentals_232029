#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char grade = get_char ("Enter your grade: ");

    printf("My grade is %c\n", grade);
    return 0;
}
