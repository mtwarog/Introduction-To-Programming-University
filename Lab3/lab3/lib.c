#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int currChar;
void changeToLowercase()
{
        while ((currChar=getchar()) != EOF)
        {
            if (isupper(currChar))
              currChar = tolower(currChar);
            printf("%c", (char) currChar);
        }
}
void changeToUppercase()
{
        while ((currChar=getchar()) != EOF)
        {
            if (islower(currChar))
                currChar = toupper(currChar);
            printf("%c", (char) currChar);
        }
}
void changeUpperToLowerAndLowerToUpper()
{
        while ((currChar=getchar()) != EOF)
        {
            if (islower(currChar))
                currChar = toupper(currChar);
            else if (isupper(currChar))
                currChar = tolower(currChar);
            printf("%c", (char) currChar);
        }
}
void changeFirstLetterToUpper()
{
    char word[100];
    while (scanf("%s", word)==1)
    {
        word[0] = toupper(word[0]);
            printf("%s ", word);
    }
}

char * strtolower( char * dest, const char * src, size_t n )
{
    if( !n )
        return 0;

    else
    {
        char * d = dest;
        while ( *src && --n > 0)
            *d++ = tolower(*src++);

        *d = 0;
        return dest;
    }
}

char * strtoupper( char * dest, const char * src, size_t n )
{
    if( !n )
        return 0;

    else
    {
        char * d = dest;
        while( *src && --n > 0)
            *d++ = toupper(*src++);

        *d = 0;
        return dest;
    }
}
