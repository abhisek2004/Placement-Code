//wap to print 1 to 10 or 10 to 1
#include<stdio.h>
void show(int);
int main()
{  
    int x=10;
    show(x);
    return 0;
}
void show (int y);
{
    if(y>=1)
    {
        printf(" %d ",y);
        show(y-1);
    }
}