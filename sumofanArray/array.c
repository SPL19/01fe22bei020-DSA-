#include <stdio.h>
int sumArray(int [] ,int );
int main()
{
    int arr[10];
    FILE *input, *output;
    input = fopen("input.txt", "r");
    if (input == NULL)
    {
        perror("\nError in opening input file\n");
        return 1;
    }

    int i = 0;
    int j = 0;
    while (fscanf(input, "%d", &arr[i]) != EOF)
    {
        i++;
        if (i >= 10)
        {
            printf("Array size limit reached!\n");
            break;
        }
    }
    fclose(input);

    int size = i;

    int sum = sumArray(arr, size);

    printf("Elements are:\n");
    for (j = 0; j < size; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    output = fopen("output.txt", "w");
    if (output == NULL)
    {
        perror("\nError in opening output file\n");
        return 1;
    }

    printf("%d",sum);
    fprintf(output, "%d\n", sum);
    fclose(output);
    return 0;
}
int sumArray(int arr[],int size)
{
    int sum=0;
    for (int j = 0; j < size; j++)
    {
            sum=sum+size;
    }
    return sum;
}
