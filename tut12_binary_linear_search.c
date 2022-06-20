#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)

            return mid;

        else if (arr[mid] > element)

            high = mid - 1;

        else

            low = mid + 1;
    }
}

// Linear search for any sorted or unsorted array
int linearSearch(int arr[], int size, int element)
{
    if (size == 0)
    {
        return -1;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == element)
        {

            return i;
        }
    }
    return -2;
}

int main()
{
    int arr[] = {4, 5, 12, 20, 56, 78, 95, 167};
    int size = sizeof(arr) / sizeof(int);
    int element = 12;
    // int searchResult = linearSearch(arr, size, element);
    // if (searchResult == -1)
    // {
    //     printf("The array is empty  so you cannot search any element");
    // }
    // else if (searchResult == -2)
    //     printf("%d is not found in the array ", element);
    // else
    //     printf("%d is at index %d", element, searchResult);

    int searchResult = binarySearch(arr, size, element);
    printf("%d is at index %d", element, searchResult);

    return 0;
}