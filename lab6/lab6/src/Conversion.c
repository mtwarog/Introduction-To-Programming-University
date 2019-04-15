// Converts decimal numbers to other bases and vice versa
#include "Conversion.h"
#include "EvalExpression.h"

int bin_dec(char digit[50]) {
    int i=0, j=0, len=0, dec=0, d;
    while (digit[len]!=0) {
        len++;
    }
    j=len;
    for (i=0; i<len; i++) {
        j--;
        d=digit[i]-'0';
        dec=dec+d*pow(2,j);
    }
    return(dec);
}

int oct_dec(char digit[50]) {
    int i=0, j=0, len=0, dec=0, d;
    while (digit[len]!=0) {
        len++;
    }
    j=len;
    for (i=0; i<len; i++) {
        j--;
        d=digit[i]-'0';
        dec=dec+d*pow(8,j);
    }
    return(dec);
}

int hex_dec(char digit[50]) {
    int i=0, j=0, len=0, dec=0, d;
    while (digit[len]!=0) {
        len++;
    }
    j=len;
    for (i=0; i<len; i++) {
        j--;
        switch(digit[i]) {
        case 'A':
            d=10;
            break;
        case 'B':
            d=11;
            break;
        case 'C':
            d=12;
            break;
        case 'D':
            d=13;
            break;
        case 'E':
            d=14;
            break;
        case 'F':
            d=15;
            break;
        default:
            d=digit[i]-'0';
        }
        dec=dec+d*pow(16,j);
    }
    return(dec);
}

char dec_bin(int digit) {
    int len=0, i=0;
    char rem[50];
    if (digit==0) {
        printf("0");
    } else {
        while(digit>0) {
             rem[i]=digit%2;
             digit=digit/2;
             i++;
             len++;
         }
    }
    for(i=len-1;i>=0;i--)
        printf("%i",rem[i]);
}

char dec_oct(int digit) {
    int len=0, i=0;
    char rem[50];
    if (digit==0) {
        printf("0");
    } else {
        while(digit>0) {
             rem[i]=digit%8;
             digit=digit/8;
             i++;
             len++;
         }
    }
     for(i=len-1;i>=0;i--)
        printf("%i",rem[i]);
}

char dec_hex(int digit) {
    int len=0, i=0;
    char rem[50];
    if (digit==0) {
        printf("0");
    } else {
        while(digit>0) {
             rem[i]=digit%16;
             digit=digit/16;
             i++;
             len++;
         }
    }
     for(i=len-1;i>=0;i--){
        switch(rem[i])
        {
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default :
            printf("%i",rem[i]);
        }
  }
}
