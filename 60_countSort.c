#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// sorting of array using count sorting algorithm

void display(int myarray[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", myarray[i]);
    }
    printf("\n\n");
}

int getGreaterElement(int *arr, int size)
{
    int return_val;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[i + 1])

            return_val = arr[i + 1];

        else
            return_val = arr[i];
    }
    return return_val;
}
void countSort(int *arr, int size)
{
    int greater_val = getGreaterElement(arr, size);
    // creating count array 
    int *arr2 = (int *)malloc((greater_val + 1) * sizeof(int));
    int sizeOf_arr2 = greater_val + 1;
    // printf("\ngreate val is%d\n", greater_val);
    int k = 0;
    int j = 0;
    int i = 0;

    // initilizing the arr2 array with value as 0
    for (int i = 0; i < sizeOf_arr2; i++)
    {
        arr2[i] = 0;
    }
    // display(arr2, sizeOf_arr2);

    while (k < size)
    {
        arr2[arr[k]] = arr2[arr[k]] + 1;
        // int arr[] = {0,4,10,8,3,7,11,12};
        // arr2[]={1,0,0,1,1,0,0,1,1,0,1,1,1};
        k++;
    }
        display(arr2, sizeOf_arr2);

    for (int i = 0; i < sizeOf_arr2; i++)
    {
        while (arr2[i] != 0)
        {

            arr[j] = i;
            arr2[i]--;
            j++;
        }
    }
    // display(arr2, sizeOf_arr2);
    // display(arr, size);
    free(arr2);
}
int main()
{

    int arr[] = {0,4,10,8,3,7,11,12};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    countSort(arr, size);
    display(arr, size);
    printf("%d", getGreaterElement(arr, size));
    getch();
    return 0;
}