// Merging two sorted parts of unsorted array in the same array in sorted order
#include <stdio.h>
#include <stdlib.h>

int counter=0;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\n");
}

void mergeSort(int *arr,int low,int mid,int high)
{
    int i, j, k;
    i = k = low;
    j = mid+1;
    int arr2[high + 1];
    while (i<=mid && j<=high)

    {
        if (arr[i]<arr[j])
        {
            arr2[k] = arr[i];
            i++;
            k++;
            counter++;

        }
        else
        {
            arr2[k] = arr[j];
            j++;
            k++;
            counter++;

        }
        
    }
    while (i<=mid)
    {
        arr2[k] = arr[i];
        k++;
        i++;
        counter++;
    }
    while (j<=high)
    {
        arr2[k] = arr[j];
        k++;
        j++;
        counter++;
    }
    for (int i = 0; i <= high; i++)
    {
        arr[i] = arr2[i];
    }
    printf("number of exchanges while implementing merge sort = %d\n",counter);
    
    
}

int main()
{
   
    
    int arr[] = {0, 8, 23, 24, 10, 15,22,35,40,45,89};
    int high= (sizeof(arr) / sizeof(int))-1;
    mergeSort(arr, 0, 3, high);
    display(arr, high + 1);

    return 0;
}