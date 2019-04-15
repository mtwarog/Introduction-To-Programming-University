#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//TODO
//What if few characters has equal numbers of occurrences?
//Why counters only count to 32?

long int allChars[256] = {0};
int c, result;

void mostOftenAppears()
{
    while ((c=getchar()) != EOF)
        {
            if (c < 256)
                allChars[c]++;
        }

    result = 0;
    for (int k = 1; k < sizeof(allChars)/sizeof(int); k++)
        if (allChars[result] < allChars[k]) result = k;
    printf("Most often appearing character is %c \n", (char) result);

    result = 48;
    for (int k = 49; k < 123; k++)
        if (allChars[result] < allChars[k]) result = k;

    printf("Most often appearing alpha-numeric character is: ");

    for (int l = 49; l < 123; l++)
    {
        if (allChars[result] == allChars[l]) printf(" %c", (char) l);
    }
}

void leastOftenAppears()
{
    while ((c=getchar()) != EOF)
        {
            if (c < 256)
                allChars[c]++;
        }
    result = 0;
    for (int k = 1; k < sizeof(allChars)/sizeof(int); k++)
        if ((allChars[result] > allChars[k]) && (allChars[k] > 0)) result = k;
    printf("Least often appearing character: %c \n", (char) result);

    result = 48;
    for (int k = 49; k < 123; k++)
        if (allChars[result] > allChars[k] && (allChars[k] > 0)) result = k;

    printf("Least often appearing alpha-numeric character is:");

    for (int l = 49; l < 123; l++)
    {
        if (allChars[result] == allChars[l]) printf(" %c", (char) l);
    }
}
