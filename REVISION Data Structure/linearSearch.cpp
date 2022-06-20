#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int val)
{

    for (int i = 0; i < size; i++)
    {
        cout << "iteration number " << i + 1 << endl;
        if (val == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {7, 10, 85, 32, 45, 11, 0, 10, 2, 5};
    int size = 10;
    int num = 5;
    int returnval = linearSearch(a, size, num);

    if (returnval == -1)
        cout << "Number not found" << endl;
    else
        cout << num << "is found at position " << returnval + 1;

    return 0;
}