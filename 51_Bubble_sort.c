#include<stdio.h>

static int noOfSwap=0;
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n\n");
}
void sort(int arr[], int size)
{ /* You can also use int pointer (int *arr) inplace of int arr[]  */
    int temp;
    int is_sorted_check = 0;
    for (int i = 0; i < size - 1; i++)
    {
        printf("working on pass number %d\n ", i+1);
        is_sorted_check = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_sorted_check = 0;
                noOfSwap++;
            }
        }
        if (is_sorted_check)
        {

            return;
        }
    }
}
int main()
{
    int arr[] = {12, 87, 98, 1, 8, 96, 15};
    int size = sizeof(arr) / sizeof(int);
    display(arr, size);
    sort(arr, size);
    display(arr, size);
    // display(arr, size);
    int arr2[] = {10, 12, 15, 18, 20, 40};
    display(arr2, 6);
    sort(arr2, 6);
    display(arr2, 6);
    printf("Total number of swap is = %d ",noOfSwap);
}
