// TODO
// Change if statements to switch with cases
int main(int argc, char *argv[])
{
    if(argc==1)
           mostOftenAppears();
       else if (argc == 2)
       {
           switch(argv[1][1])
           {
           case 'm':
           case 'M':
               mostOftenAppears();
               break;
           case 'l':
           case 'L':
               leastOftenAppears();
               break;
           default:
               mostOftenAppears();
               break;
           }
       }
    if (argc > 2)
    {
        puts("Too many arguments");
    }
    return 0;
}
