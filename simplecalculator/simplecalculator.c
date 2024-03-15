#include <stdio.h>

int main()
{
    char operand;
    int a,b;
    FILE *input,*output;
    input=fopen("input.txt","r");
    fscanf(input,"%d %c %d",&a,&operand,&b);
    if(input==NULL)
    {
        perror("\nError in opening a file\n");
        return 1;
    }

    while(!feof(input))
    {
        fscanf(input,"%d %c %d",&a,&operand,&b);

    }
    int res;
   switch(operand)
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

    output=fopen("output.txt","w");
    fprintf(output,"%d",res);
     fclose(output);
    return 0;
}
