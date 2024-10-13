//wap to find the sum of all no from 1 to n using recursion
#include<stdio.h>
int sum(int x);
int main()
{
    int x=1;
    int r;
    r=sum(x);
    printf(" %d ",r);
    return 0;
}
int sum(int x)
{
    if(x==10)
        return x;
        else
        return x+sum(x+1);
}