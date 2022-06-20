// merging two sorted array into a single array in sorted order 
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

void mergeSort(int *arr1, int *arr2, int *arr3, int size1, int size2)
{
    int i, j, k;
    i = j = k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i<size1)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j<size2)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    
    
    
}

int main()
{
    int arr1[] = {12, 15, 20, 48,78,85,95,245,356};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {0, 8, 23};
    int size2 = sizeof(arr2) / sizeof(int);
    int arr3=size1 + size2;
    int size3 = sizeof(arr3) / sizeof(int);
    
    mergeSort(arr1, arr2, arr3, size1, size2);
    display(arr3,size3 );

    return 0;
}