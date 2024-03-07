#include<stdio.h>
int add(int ,int );
int main()
{
    int r1,r2;
    int i1,i2;
    int r;
    int i;
    int c;
    printf("enter real and imaginary ");
    scanf("%d%d%*c",&r1,&i1);
    printf("enter real and imaginary");
    scanf("%d%d%*c",&r2,&i2);
     r=r1+r2;
     i=i1+i2;
     printf("%d+%di",r,i);
}
int add(int a,int b)
{
    return a+b;
}
