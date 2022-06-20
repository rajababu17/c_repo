
#include <iostream>
using namespace std;
int reverseNumber(int num){
    int temp;
    int rev = 0;
    while (num!=0)
    {
        temp=num%10;
        rev=(rev*10)+temp;
        num=(num-temp)/10;

    }
    return rev;
    

}
int main(){
int a;
cout<<"Enter any number ";
cin>>a;
cout<<reverseNumber(a);

    return 0;
}