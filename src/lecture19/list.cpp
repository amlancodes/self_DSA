#include<iostream>
#include<list>
using namespace std;
int main()
{
    //list is like linked list in java
    list<int>l;
    l.push_back(9);
    l.push_back(232);
    l.push_back(3);
    l.push_back(565);
    l.push_front(34);
    //auto keyword is to deduce the type that is needed
     for (auto i=l.cbegin(); i != l.cend(); i++){
        cout<<*i<<" ";
      }
    cout<<endl;
    
    // l.at() not valid since we cannot access element randomly
    l.pop_back();
    l.pop_front();
    cout<<l.empty()<<endl;


 return 0;
}