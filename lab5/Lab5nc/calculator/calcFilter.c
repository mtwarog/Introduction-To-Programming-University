#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "evalExpression.h"
#include "calcFilter.h"

static int errorsw = 0, validsw = 0;

int calcFilter(const char *str) // prints expressions depending on switches states (errorsw, validsw)
{
    if (validsw == 1 && isValidExpression(str))
    {
        printf("%s = %lf\n", str, getExprValue());
        return 1;
    }
    else if (errorsw == 1 && !isValidExpression(str))
    {
        printf("%s\n", str);
        return 1;
    }
    else if (errorsw)
        return 1;
    else
        return 0;
}

void setError(int mode) // sets errorsw state to 1 if program running with -e argument
{
    errorsw = mode;
}

void setValid(int mode) // sets validsw state to 1 if program running with -e argument
{
    validsw = mode;
}
