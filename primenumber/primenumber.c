#include <stdio.h>
int main()
{
    int n;
    FILE *input,*output;
    input=fopen("input.txt","r");
    if(input==NULL)
    {
        perror("\nError in opening a file\n");
        return 1;
    }
    fscanf(input,"%d",&n);
    int i;
    int flag=0;
    for(i=2;i<=(n/2);i++)
    {
     if(n%i==0)
     {
      flag=1;
        break;
     }

    }
    output=fopen("output.txt","w");
    if(flag==0)
    {
        fprintf(output,"the given number is prime");
    }
    else
    {
        fprintf(output,"the given number is not prime");
    }
    fclose(output);
    return 0;
}
