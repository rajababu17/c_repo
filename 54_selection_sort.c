#include <stdio.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\n");
}

void selectionSort(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        int ch   = i;
    
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[ch])
            {
                
                ch = j;
            } 
        }
        if (ch != i)
        {
            temp = arr[i];
            arr[i] = arr[ch];
            arr[ch] = temp;
        }

        printf("\n Value of arr after %d pass :", i+1);
        display(arr, size);
    }
}

int main()
{
    int arr[] = {9,12,15,15,45,9};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    selectionSort(arr, size);
    display(arr, size);
    return 0;
}