// Counts digits and aplha signs number in input
// Character-oriented program
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void main()
{
    putenv("LC_ALL=pl_PL")
    long CharNo = 0;
    long DigitNo = 0;
    char plSigns[] = "π•øØüè≥£Û”Ò—";
    int currChar;
    while ( (currChar=getchar()) != EOF)
    {
        if (isdigit(currChar))
            DigitNo++;
        else if (isalpha(currChar) || strchr(plSigns, (int)currChar) != NULL)
            //if (strchr(plSigns, (int)currChar) != NULL) puts("%c", (char) currChar);
            CharNo++;
    }
    printf("There were:%ld digits and %ld alphabetical characters %s \n", DigitNo, CharNo, plSigns);
}
