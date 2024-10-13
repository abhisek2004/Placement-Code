#include<stdio.h>
int arm(int);
int main()
{
    int r;
    r=arm(153);
    if(r==1)
    printf("\nArm");
    else
    printf("\nNon arm");
    return 0;
}
int arm(int n)
{
    int r,s=0,d;
    d=n;
    while(n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n/=10;
    }
    if (s==d)
    return 1;
    else 
    return 0;
}