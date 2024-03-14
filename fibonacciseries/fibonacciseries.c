#include <stdio.h>
#define MAX 10
int main()
{
   int x[MAX];
    FILE *input,*output;
    input=fopen("input.txt","r");
    int n;
    printf("Enter n");
    scanf("%d",&n);
    fscanf(input,"%d",&n);
    if(input==NULL)
    {
        perror("\nError in opening a file\n");
        return 1;
    }
    int i;
    int j=0;
    int a=-1;
      int b=1;

    for(i=0;i<=n;i++)
    {
      int c=a+b;
      printf("%d\t",c);
      a=b;
      b=c;
      x[j]=c;
      j++;

     }
     output=fopen("output.txt","w");
     for(i=0;i<j;i++)
     {
         fprintf(output,"%d ",x[i]);
     }
    fclose(output);
    return 0;
}
