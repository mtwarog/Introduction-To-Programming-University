#include <stdio.h>
#include <stdlib.h>
#include "EvalExpression.h"
#include "Conversion.h"

char line[200]; //input line
char d1[50], d2[50], bin[50], oct[50], hex[50]; //variables in different bases
int e1, e2, s1, s2, answer;
char exitStr[]="exit\n";

void clearNumTables()
{
    int i=0;
    for (i=0; i<50; i++) { //clearing tables
        f1[i]=0;f2[i]=0;d1[i]=0;d2[i]=0;bin[i]=0; oct[i]=0; hex[i]=0;
    }
}
void isExit()
{
    if (strcmp(exitStr, line)==0) { //checking if exit was inputed
        exit(0);
    }
}
void firstNumBaseCheck()
{
    if (f1[0]=='b') { //first number is bin?
            s1=1;
            int i=0;
            while (f1[i]!=0) {
                d1[i]=f1[i+1];
                i++;
            }
        } else {
            if (f1[0]=='0') { //first number is oct or hex?
                if (f1[1]=='x') { //first number is hex?
                    s1=3;
                    int i=0;
                    while (f1[i]!=0) {
                        d1[i]=f1[i+2];
                        i++;
                    }
                } else {
                    s1=2;
                    int i=0;
                    while (f1[i]!=0) {
                        d1[i]=f1[i+1];
                        i++;
                    }
                }
            } else { //is decimal?
                s1=0;
                int i=0;
                while (f1[i]!=0) {
                    d1[i]=f1[i];
                    i++;
                }
            }
        }
}
void secondNumBaseCheck()
{
    if (f2[0]=='b') {  //second number is bin?
            s2=1;
            int i=0;
            while (f2[i]!=0) {
                d2[i]=f2[i+1];
                i++;
            }
        } else {
            if (f2[0]=='0') { //second number is oct or hex?
                if (f2[1]=='x') { //second number is hex?
                    s2=3;
                    int i=0;
                    while (f2[i]!=0) {
                        d2[i]=f2[i+2];
                        i++;
                    }
                } else { //second number is oct?
                    s2=2;
                    int i=0;
                    while (f2[i]!=0) {
                        d2[i]=f2[i+1];
                        i++;
                    }
                }
            } else { //second number is dec?
                s2=0;
                int i=0;
                while (f2[i]!=0) {
                    d2[i]=f2[i];
                    i++;
                }
            }
        }
}
void firstNumConvertionToDec()
{
    switch (s1) { //convert first number to decimal
        case 1:
            e1=bin_dec(d1);
            break;
        case 2:
            e1=oct_dec(d1);
            break;
        case 3:
            e1=hex_dec(d1);
            break;
        default:
            e1=atoi(d1); //array to integer for decimal
        }

}
void secondNumConvertionToDec()
{
        switch (s2) { //convert second number to decimal
        case 1:
            e2=bin_dec(d2);
            break;
        case 2:
            e2=oct_dec(d2);
            break;
        case 3:
            e2=hex_dec(d2);
            break;
        default:
            e2=atoi(d2); //array to integer for decimal
        }
}
void answerPrinting()
{
        if (e_code==0) {
            printf("[%i, ", answer);
            dec_bin(answer);printf(", ");
            dec_oct(answer);printf(", ");
            dec_hex(answer);
            printf("]\n");
        }
}

int main()
{
    while (strcmp(exitStr, line)!=0) {
        clearNumTables();
        fgets(line, sizeof(line), stdin); //reading input from std input
        e_code=0; //error_code
        isExit();
        isValidExpression(line); //checking if expression is proper

        firstNumBaseCheck();
        secondNumBaseCheck();
        firstNumConvertionToDec();
        secondNumConvertionToDec();

        answer=ExprValue(e1,e2); // calculate expression value
        answerPrinting();
    }
}
