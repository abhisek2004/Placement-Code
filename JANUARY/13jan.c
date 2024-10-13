//wap to find the sum of two 3*3 matrix
#include<stdio.h>
void result(int [][3],int [][3]);
int i,j;
int main()
{
    int i,j;
    int x[3][3],y[3][3];
    printf("\nEnter the value of first matrix");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&x[i][j] );
        }
    }    
    printf("\nenter the values for sec matrix");
    for(i=0;j<3;i++)
    {
        scanf("%d",&y[i][j]);
    }
    sum(x,y);
    return 0;
}
void sum(int x[][3],int y[3][3])
{
    int z[3][3]={0},i,j;
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            z[i][j]=x[i][j]+y[i][j] ;
        }
    }
    printf("\n The resultant martix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
    {
        printf(" %d ",z[i][j]);
    }
    printf("\n");
    }
}