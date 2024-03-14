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
    while(!feof(input))
    {
        fscanf(input,"%d",&n);

    }
    int temp;
    int sum=0;
    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }

    output=fopen("output.txt","w");
    fprintf(output,"%d",sum);
    fclose(output);
    return 0;
}
