// Prints first name 10 times and last name 5 times
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    for (i=0; i<9; i++)
        {
            printf("Maciej;");
            if (i==8)
                puts("Maciej.");
        }

    for (i=0; i<5; i++)
        puts("Twar\242g");
}
