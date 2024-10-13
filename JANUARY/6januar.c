#include<stdio.h>
void put();
int main()
{
    put();
}
void put()
{
    char s[]="hello";
    printf("hello");//hello
    printf("\n%s",s);//hello
    printf("\n%s",s+2);//
    printf("\n%s","hello"+1);
}

#include<stdio.h>
int sum(int ,int);
int mul(int ,int);
float div(int ,int);
int main()
{
    int a,b;
    int op;
    printf("\nEnter the opetion \n 1 add \n 2 sub \n 3 dev ");
    printf("\nEnter for a,b");
    sacnf("%d%d",&a, &b);
    switch(op)
    {
        case 1:
        printf("\nSum of %d %d is %d" ,a,b,sum(a,b));
        break;
        case 2:
        printf("\nSum of %d %d is %d" ,a,b,mul(a,b));
        break;
        case 3:
        printf("\nSum of %d %d is %d" ,a,b,div(a,b));
        break;
        defult:
        printf("\nInvalid option:");
        break;
    }
    return 0;
}
{
    int sum(int m1,int m2)
    {
        return m1+m2;
    }
    int mul(int m1,int m2)
    {
        return m1*m2;
    }
    float div(int m1,int m2)
    {
        return (float)m1/m2;
    }
}