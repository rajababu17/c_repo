#include <iostream>
using namespace std;
int isArmstrong(int num)
{
    int temp;
    int sum = 0;
    int temp2;
    temp2 = num;

    while (temp2 != 0)
    {
        temp = temp2 % 10;
        sum = sum + (temp * temp * temp);
        temp2 = (temp2 - temp) / 10;
    }
    if (sum == num)

        return 1;
    return 0;
}
int main()
{
    int num;
    int a;

    cout << "Enter a number ";
    cin >> num;
    a=isArmstrong(num);
    if (a)
    {
        cout<<"number is armstrong";
    }
    else{
        cout<<"number is not an armstrong";
    }
    


    return 0;
}