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

    int j;
    int remainder;
    int reverse=0;
    int temp=n;
    for(j=0;j<=n;j++)
    {
      remainder=n%10;
      reverse=reverse*10+remainder;
      n=n/10;
    }

    output=fopen("output.txt","w");
    if(temp==reverse)
    {
       fprintf(output,"the given number is palindrome");
    }
    else
        fprintf(output,"the given number is not palindrome");

   fclose(output);
    return 0;
}
