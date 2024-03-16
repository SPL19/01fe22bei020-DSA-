#include <stdio.h>

void selectionSort(int arr[], int size);

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

    selectionSort(arr, size);

    printf("Sorted elements are:\n");
    for (int j = 0; j < size; j++)
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


    for (int j = 0; j < size; j++)
    {
        printf("%d ",arr[j]);
        fprintf(output, "%d ", arr[j]);
    }
    fprintf(output, "\n");

    fclose(output);
    return 0;
}

void selectionSort(int arr[], int size)
{
    int i, j, min;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
