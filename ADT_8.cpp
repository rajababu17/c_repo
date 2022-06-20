#include <iostream>
using namespace std;

class myArray
{
    // private:
    int total_size;
    int used_sized;
    int *ptr;

public:
    void setData(); //Declaration of a class method

    //Creating a constructor

    myArray(int tsize, int usedSize)
    {
        total_size = tsize;
        used_sized = usedSize;
        ptr = (int *)malloc(tsize * sizeof(int));
    }

    void getData()
    {

        for (int i = 0; i < myArray::used_sized; i++)
        {
            printf("\n The value at %d elements is %d", i, ptr[i]);
        }
    }
};
void myArray::setData()
{
    int v;
    for (int i = 0; i < used_sized; i++)
    {
        printf("Enter the value at %d elements", i);
        scanf("%d", &v);
        myArray::ptr[i] = v;
    }
}


int main()
{

    printf("running c++ programm");
    myArray marks(100, 5);
    marks.setData();
    marks.getData();

    return 0;
}

// int
// main()
// {
//     myArray marks(100, 20);
//     // setValue(&marks);
//     // Show(&marks);
//     // get(&marks);

//     return 0;
// }
