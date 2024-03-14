#include <stdio.h>

int main()
{

    FILE *input,*output;
    input=fopen("input.txt","r");
    if(input==NULL)
    {
        perror("\nError in opening a file\n");
        return 1;
    }
    int a;
    int b;

    fscanf(input,"%d",&a);
    fscanf(input,"%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;

    output=fopen("output.txt","w");
    fprintf(output,"%d ",a);
    fprintf(output,"%d",b);

    fclose(output);
    return 0;
}
