#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j = low;

    for (; j < high; j++)
    {
        if (arr[j] < pivot)
        {

            swap(&arr[++i], &arr[j]);
        }
    }
    swap(&arr[++i], &arr[high]);
    return i;
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {8,2,6,1,12,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Numbers before sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }

    QuickSort(arr, 0, size - 1);

    printf("\nAfter sorting:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }

    return 0;
}
