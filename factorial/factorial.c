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
    int i;
    int factorial=1;
    for(i=2;i<=5;i++)
    {
     factorial*=i;
    }
    printf("%d",factorial);
    output=fopen("output.txt","w");
    fprintf(output,"%d",factorial);
    fclose(output);
    return 0;
}
