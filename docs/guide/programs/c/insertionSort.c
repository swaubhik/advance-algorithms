// Insertion sort in C

#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *arr, int n);

int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    insertionSort(arr, n);
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    // Print time complexity of the algorithm
    printf("Time complexity: O(n^2)");
    return 0;
}

void insertionSort(int *arr, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// output
// Enter the number of elements: 5
// Enter the elements: 5 4 3 2 1
// Sorted array: 1 2 3 4 5
// Time complexity: O(n^2)