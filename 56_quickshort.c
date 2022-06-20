#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\n");
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int start = low + 1;
    int end = high;
    int temp;

    do
    {

        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    } while (end > start);

    temp = arr[low];
    arr[low] = arr[end];
    arr[end] = temp;
    return end;
}

void quickSort(int *arr, int low, int high)

{
    int partitionIndex;
  


    if (low < high)
    {
        display(arr, 11);
        partitionIndex = partition(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

int main()
{

    int arr[] = {27, 98, 93, 56, 3, 2, 3, 98,45,10,0};
    //          {27, 3 start, 93, 56, 3, 2, 98end, 98};
    //          {27, 3, 2start, 56, 3, 93end, 98, 98};

    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    quickSort(arr, 0, size - 1);
    display(arr, size);

    return 0;
}