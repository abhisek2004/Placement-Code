///prg for find the different between a primitive & an array as argument in udf
#include<stdio.h>
void show(int); // prototype
int main()
{
    int x=10;
    printf("\n Before calling : %d at %u",x,&x);
    show(x);
    printf("\n after calling : %d at %u",x,&x);
    return 0;
}
void show(int x)
{
    x=x+10;
    printf("\n In udf: %d at %u",x,&x);
}