#include<stdio.h>
int sort(int [],int);
int main()
{
    int x[100];
    int n,i;
    printf("\nenter for n:");
    scanf("%d",&n);//identified size
    printf("\nenter the elements of array");//filling 
    for(i=0;i<n;i++)
    {
        printf("\nenter of index %d = ",i);
        scanf("%d",&x[i]);
    }
    printf("\nthe original array");
    for(i=0;i<n;i++)
    {
        printf("\nx[%d] = %d",i,x[i]);
    }
    sort(x,n);
    for(i=0;i<n;i++)
    {
        printf("\nx[%d] = %d",i,x[i]);
    }
    return 0;
}
int sort(int x[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
        {
	        for(j=i+1;j<n;j++)
				{
					if(x[i]>x[j])
						{
							t=x[i];
							x[i]=x[j];
							x[j]=t;		
						}
				}
		}
printf("\nthe sorted array");
}