#include <stdio.h>

int linearSearch(int [], int , int);

int main()
{
    int arr[10];
    int key;
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

    printf("Enter key to search: ");
    scanf("%d", &key);

    int s = linearSearch(arr, size, key);

    printf("Elements are:\n");
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
    if (s == 1)
    {
        printf("Key element %d is found\n", key);
        fprintf(output, "Key element %d is found\n", key);
    }
    else if (s == -1)
    {
        printf("Key element %d is not found\n", key);
        fprintf(output, "Key element %d is not found\n", key);
    }

    fclose(output);
    return 0;
}

int linearSearch(int arr[], int size, int key)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == key)
            return 1;
    }
    return -1;
}
