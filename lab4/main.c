//LineSearch Fileter
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char **s;
    int minNo;
    int size;
    int i;
    char Line[200];

    if (argc > 1)
    {
        minNo = atoi(argv[1]);
        s = argv + 2;
        size = argc - 2;

        setMinNumber(minNo);

        while (gets(Line)!=NULL)
        {
            if (isMatching(Line, s,size) == 1)
                puts(Line);
        }
    } else puts(Line);
    return 0;
}
