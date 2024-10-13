#include<stdio.h>
void show0(int []); // array
int main()
{
    int x[]={10,20};
    printf("\n Before calling %d at %u \n %d at %u",x [0],&x[0],x[1],&x[1]);
    show(x); // base address
    printf("\n after calling %d at %u \n %d at %u", x [0],&x[0],x[1],&x[1]);
    return 0;
}
void show(int x[])
{
    x[0]=x[0]+10;
    x[1]=x[1]+20;
    printf("\n after calling %d at %u \n %d at %u", x[0],&x[0],x[1],&x[1]);
}