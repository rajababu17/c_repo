#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> h1)
{
    cout << "\nElement of data are:\n";
    for (int i = 0; i < h1.size(); i++)
    {
        cout << h1[i] << " ";
        // Or there is another method to  display these  things
        cout << h1.at(i) << " ";
    }
}
int main()
{

    vector<int> v1;
    int element;
    int size;
    cout << "How many element :";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element : " << endl;
        cin >> element;
        v1.push_back(element);
    }

    display(v1);
    v1.pop_back();
    v1.pop_back();
    display(v1);

    vector<int>::iterator iter = v1.begin();
    cout<<"\n The value of the iterator is : "<<*iter;


    v1.insert(iter, 555);
    v1.insert(iter + 1, 5, 50);
    
    display(v1);
    return 0;
}