// Line-oriented program
#include <stdio.h>
#include <string.h>

int main()
{
    char Line[200];
    while (gets(Line)!=NULL)
    {
        if ((strlen(Line)%2) == 0)
            puts(Line);
    }
}
