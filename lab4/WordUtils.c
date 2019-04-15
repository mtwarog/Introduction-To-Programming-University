#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int i, words_found;
static int minNumber = 0;

int wordInString( char *str, char *wd)
{
    if (strstr(str, wd) != NULL)
        return 1;
    return 0;
}

int wordsInString(const char *str, char *wds[], int size)
{
    words_found = 0;
    for (i = 0; i < size; i++)
    {
        if (wordInString(str, wds[i]) == 1) words_found++;
    }
    return words_found;
}

void setMinNumber(int number)
{
    if (number > 0)
        minNumber = number;
    else
        minNumber = 0;
}

int isMatching(const char *str, char *wds[], int size)
{
    if (wordsInString(str, wds, size) >= minNumber)
        return 1;
    return 0;
}
