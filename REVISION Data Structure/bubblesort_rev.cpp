#include <iostream>

using namespace std;
int counter = 0;

void display(int *arr, int size)
{

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubblesort(int *arr, int size)
{
    int temp;
    bool isSorted = 0;
    for (int i = 0; i < size - 1; i++)

    {
        isSorted = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
                counter++;
                cout << "value of counter is" << counter << endl;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{

    int b[6] = {102, 10, 114, 19, 43, 53};
    display(b, 6);
    cout << "\nafter sorting \n";
    bubblesort(b, 6);
    display(b, 6);

    return 0;
}