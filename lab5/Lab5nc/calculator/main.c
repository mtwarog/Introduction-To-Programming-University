#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calcFilter.h"

int main(int argc, char *argv[])
{
    char str[100];
    char exitStr[] = "exit";
    if (argc > 1) //if any arguments exists
    {
        switch (argv[1][1])
        {
            case 'V': case 'v': // program returns valid expressions
                setValid(1);
                break;
            case 'E': case 'e': // program returns invalid expressions
                setError(1);
                break;
            default:
                setValid(1); // program returns valid expressions when invalid argument was passed
                break;
        }
    }
    else
        setValid(1); // program returns valid expressions when no argument was passed

    while (gets(str) != NULL && strcmp(exitStr, str) != 0) // do loop interior if expression line is not null and is not equal to 'exit'
    {
        if (calcFilter(str)); // check if expression is valid(-V) or invalid(-E) and prints expression value if it is possible to calculate
        else
            printf("expression error!\n");
    }
    return 0;
}
