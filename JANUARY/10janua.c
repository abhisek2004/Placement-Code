#include<stdio.h>
int linearsearch(int [],int,int);
#define max 100
int main()
{
    int a[max],i,search,res,n;
    printf("\nenter the ub of your array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the element for %d index:",i);
        scanf("%d",&a[i]);
    }
    printf("\n the array element are:\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nenter the element to search");
    scanf("%d",&search);
    res=linearsearch(a,n,search);
    printf("\nelement found at %d",res);
    return 0;
}
int linearsearch(int a[],int ub,int ele)
{
    int i,flag=0;
    for(i=0;i<ub;i++)
    {
        if(a[i]==ele)
        {
            flag=1;
            return i+1;
        }
    }
    if(flag==0)
    {
        printf("\nsoory not found");
        return -1;
    }
}