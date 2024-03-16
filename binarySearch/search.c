#include <stdio.h>

int binarySearch(int [], int , int);

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

    int index = binarySearch(arr, size, key);

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
    if (index != 1)
    {
        printf("Key element %d is found at index %d\n", key,index);
        fprintf(output, "Key element %d is found at index %d\n", key,index);
    }
    else
    {
        printf("Key element %d is not found\n", key);
        fprintf(output, "Key element %d is not found\n", key);
    }

    fclose(output);
    return 0;
}

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
