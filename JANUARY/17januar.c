#include<stdio.h>
int fibbo(int);
int main()
{
    int x,i;
    printf("enter the value for x");
    scanf("%d",&x);
    for(i=1;1<=x;i++)
    {
        printf("%d", fibo(i));
    }
    return 0;
}
int fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fibo(x-1) + fibo(x-2);
}