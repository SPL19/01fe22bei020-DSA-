#include <stdio.h>
#define max 25
void Sort(int[], int);

int main()
{
    int a[max];

    FILE *input, *output;
    input = fopen("input.txt", "r");
    if (input == NULL)
    {
        perror("\nError in opening a file\n");
        return 1;
    }
    int i = 0;
    int j = 0;
    while (!feof(input))
    {
        fscanf(input, "%d", &a[i]);
        i++;
    }
    fclose(input);

    Sort(a, i); // To Sort the array

    for (j = 0; j < i; j++)
    {
        printf("%d ", a[j]);
    }

    output = fopen("output.txt", "w");

    for (j = 0; j < i; j++)
    {
        fprintf(output, "%d ", a[j]);
    }

    fclose(output);
    return 0;
}
void Sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
