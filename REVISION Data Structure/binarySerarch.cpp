#include <iostream>

using namespace std;

int binarySearch(int arr[], int val, int f, int l)
{

    int m = (f + l) / 2;
    if(f==l)
    return -1;
    if (val == arr[f])
    {
        return f;
    }
    else if (val == arr[l])
    {
        return l;
    }
    else if (val == arr[m])
    {
        return m;
    }

    if (arr[m] < val)
    {
        return binarySearch(arr, val, m + 1, l);
       
       
    }
    else
    {
        return binarySearch(arr, val, f, m - 1);
    }
    
    
}
int main()
{
    int a[] = {2, 8, 10, 12, 15, 18, 20, 24, 28, 35};
    int size = 10;
    int num = 15;
    int returnval = binarySearch(a, num, 0, size - 1);

    if (returnval == -1)
    {
        cout << " Number not found" << endl;
    }
    else
        cout << num << " is found at index " << returnval;

    return 0;
}