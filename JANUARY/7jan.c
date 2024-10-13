#include<stdio.h>
void show(int []); //prototype
int main()
{
    int x[3]={1,2,3};
    show (&x[0]);// or show (&x[0]);
    printf("\n in main memory %d %d %d",x[0],x[1],x[2]);
}
void show(int x[])//adress in to a duplicate array
{
    printf("\n in udf memory %d %d %d",x[0],x[1],x[2]);
    x[0]=x[0]+5;
}