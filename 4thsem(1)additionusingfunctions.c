#include<stdio.h>
int add(int,int);
 int main()
 {
     int c,a,b;
     printf("Enter 2 numbers");
     scanf("%d%d",&a,&b);
     c=add(a,b);
     printf("a=%d\n b=%d\n the result is c=%d\n",a,b,c);
 }
int add(int a, int b)
{

   int c=a+b;
   return c;

}
