#include <stdio.h>
#include <cs50.h>

int main (void)
{
    char word[20];

    printf("Enter word: ");
    scanf("%19s", word);

    printf("Word = %s\n", word);
    return 0;
}

