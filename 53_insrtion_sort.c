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
void insertionSort(int *arr, int size)
{

    int temp;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {

            arr[j + 1] = arr[j];

            j--;
        }

        arr[j + 1] = temp;
    }
}
int main()
{

    int arr[] = {12, 8, 2, 1, 47, 12, 50, 3};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    insertionSort(arr, size);
    display(arr, size);

    return 0;
}
