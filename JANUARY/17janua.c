#include<stdio.h>
int fact(int,int,int);
int main()
{
    int x=5,f,i=1;
    fact(x,1,1);
    return 0;
}
int fact(int x,int i,int f)
{
    if(i<=x)
    {
        f=f*i;
        fact(x,i+1,f);
    }
    else
    {
        printf("\nthe fact is %d",f);
    }
}