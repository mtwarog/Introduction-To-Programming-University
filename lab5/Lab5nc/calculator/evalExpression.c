#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "evalExpression.h"

static double f1, f2;
static char op;

int isValidExpression(const char *str)
{
    int res;
    char ops[10];
    res = sscanf(str, "%lf %s %lf", &f1, ops, &f2);
    if (res == 3 && (ops[0] == '+' || ops[0] == '*' || ops[0] == '-' || ops[0] == '/' || ops[0] == '^'))
    {
        op = ops[0];
        return 1;
    }
    else
        return 0;
}


double getExprValue(void)
{
    switch (op)
    {
        case '+':
            return (f1+f2);
        case '*':
            return (f1*f2);
        case '-':
            return (f1-f2);
        case '/':
            if (f2 == 0)
            {
                printf("Error. Division by 0.");
                return 0;
            }
            else
            return (f1/f2);
        case '^':
            return (pow(f1, f2));
        default:
            printf("Wrong operator.");
            return 0;
    }
}
