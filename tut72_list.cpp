#include<iostream>
#include<list>

using namespace std;
void display(list <int> l1){

    int size=l1.size();
    list <int> ::iterator it;
        cout<<"\nThe element are :";
    for ( it =l1.begin(); it != l1.end(); it++)
    {
        /* code */
        cout<<*it<<" ";
    }
    
    
    
    

}

int main(){

  list <int> list1;//list length is zero

  list <int> list2(3);// empty list of size zero
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(51);
    list1.push_back(510);
    list1.push_back(15);
    // list <int> :: iterator iter;
    // iter=list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<<*iter<<" ";


    // list1.insert(iter,56);
    // list1.pop_back();// delete at the end
    // list1.pop_front(); //delete from the begining
    // list1.remove(51);// search 51 in the list and then delete
    // list1.remove(56);
    list1.sort();// It sort the list
    display(list1);


    list <int> ::iterator itr2=list2.begin();
    *itr2=45;
    itr2++;
    *itr2=405;
    itr2++;
    *itr2=145;
       list2.sort();
       display(list2);
    // itr2++;
      list1.merge(list2);
      cout<<"After merging the list"<<endl;
       display(list1);

    //    Reversing the list=============
    list1.reverse();
    display(list1);

    return 0;

}