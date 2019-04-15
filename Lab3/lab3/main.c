#include <ctype.h>
#include <stdio.h>
#include <locale.h>
// TODO:
// 1. Change if statements to switch with cases like:
// switch(argv[1][1]) {
// case 'u': case 'U':
// makeUpper(s);
// break;
// }
// 2. Export used functions to another module
// 3. Add a buffer for text

//chcp

int main(int argc, char *argv[])
{
    system("chcp 1250");
    system("CLS");

    const char str[] = "M¹ka Ææa";
    char buf[sizeof( str )];

    puts(strtolower(buf, str, sizeof buf));
    puts(strtoupper(buf, str, sizeof buf));
    setlocale(LC_ALL, "pl_PL");  // przystosowanie do warunków polskich
    puts(strtolower(buf, str, sizeof buf));
    puts(strtoupper(buf, str, sizeof buf));


    if(argc==1)
           changeToUppercase();
       else if (argc == 2)
       {
           switch(argv[1][1])
           {
           case 'u':
           case 'U':
               changeToUppercase();
               break;
           case 'l':
           case 'L':
               changeToLowercase();
               break;
           case 'c':
           case 'C':
               changeUpperToLowerAndLowerToUpper();
               break;
           case 'n':
           case 'N':
               changeFirstLetterToUpper();
               break;
           default:
               changeToUppercase();
               break;
           }
       }
    if (argc > 2)
    {
        puts("Too many arguments");
    }
    return 0;
}
