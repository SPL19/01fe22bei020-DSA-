#include<stdio.h>
int main()
{
    int a,b,res;
    printf("Enter 2 numbers:");
    scanf("%d%d",&a,&b);
    char ch;
    printf("Enter operation");
    scanf("%*c%c",&ch);
    switch(ch)
    {
        case '+':res=a+b;
                 break;
        case '-':res=a-b;
                 break;
        case '*':res=a*b;
                 break;
        case '/':res=a/b;
                 break;
    }
  printf("res=%d",res);
}
