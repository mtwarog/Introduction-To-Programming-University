
#include <stdio.h>
#include "EvalExpression.h"

static char op;
int isValidExpression(line) { // is Expression valid(according to scheme)?
    int res;
    char ops[10];
    res=sscanf(line, "%s %s %s", f1, ops, f2); //break line into [number] [operator] [number] scheme
        op=ops[0];
    return(res==3);
}
char getOperator() { //returns operator to main
    return(op);
}

char getFstOperand() { //returns first number to main
    return(f1);
}

char getSecOperand() { //returns second number to main
    return(f2);
}

int ExprValue(int e1,int e2){ //calculates expression value
    char ops=op;
    int ans;
    switch(op) {
    case '+':
        ans=e1+e2;
        break;
    case '-':
        ans=e1-e2;
        break;
    case '*':
        ans=e1*e2;
        break;
    case '/':
        if (e2==0) { // expression undefined when dividing by 0
            puts("undefined");
        } else {
            ans=e1/e2;
        }
        break;
    case '%':
        ans=e1%e2;
        break;
    case '&':
        ans=e1 & e2;
        break;
    case '|':
        ans=e1 | e2;
        break;
    case '^':
        ans=e1 ^ e2;
        break;
    case '<':
        ans=e1 << e2;
        break;
    case '>':
        ans=e1 >> e2;
        break;
    default:
        printf("Expression Error\n", op);
        e_code=1;
    }
    return(ans); //return answer
}
