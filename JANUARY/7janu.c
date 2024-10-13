#include<stdio.h>
#define MAX 100
int max(int [],int);
int min(int [],int);
int main()
{   
    int arr[MAX],n,i,j,lar,small;
    printf("\n Enter the upper boundary:");
    scanf("%d",&n);
    printf("\nEnter the element of array");
    for(i=0;i<n;i++)
    {
        printf("\nEnter of index %d",i);
        scanf("%d",&arr[i]);
    }
    lar=max(arr,n);
    small=min(arr,n);

    printf("\nSmallest = %d",small);
    printf("\nLargest = %d",lar);
    return 0;
}
int max(int arr[],int n)//arr is formal array and n is ub
{
    int i,l;
    l=arr[0];
    for(i=0;i<n;i++)
    {
        if(l<arr[i])
        {
            l=arr[i];
        }
    }
    return l;
}
int min(int arr[],int n)//arr is formal array and n is ub
{
    int i,m;
    m=arr[0];
    for(i=0;i<n;i++)
    {
        if(m>arr[i])
        {
            m=arr[i];
        }
    }
    return m;
}