#include <stdio.h>

void insertionSort(int arr[], int size);

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

    insertionSort(arr, size);

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

        fprintf(output, "%d ", arr[j]);
    }
    fprintf(output, "\n");

    fclose(output);
    return 0;
}

void insertionSort(int arr[], int size)
{
    int i, key, j;
    for (i = 0; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
