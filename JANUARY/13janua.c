//paliondromic
#include<stdio.h>
#include<string.h>
int check(char []);
int main()
{
    char arr [20];
    int r;
    printf("\nEnter the string:");
    scanf("%s",arr);
    r=check(arr);
    if(r==0)
    printf("\n %s is a paliondromic",arr);
    else
    printf("\n %s is not a paliondromic",arr);
}
int check(char a[])
{
    char b[20];
    strcpy(b,a);
    strrev(b);
    return strcmp (a,b);
}