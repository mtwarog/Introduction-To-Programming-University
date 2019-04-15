// Prints all words that start and end with the same sign
// Word-oriented program
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[100];
    while (scanf("%s", word)==1)
    {
        if(isalpha(word[0]) && isalpha(word[strlen(word)-1]) && word[0] == word[strlen(word)-1])
            puts(word);
    }
}
