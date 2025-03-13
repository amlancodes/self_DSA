#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>a;
    a.push_back(3);
    a.push_back(9);
    a.push_front(2);
    a.push_front(5);
    a.push_front(1);

    for (int i = 0; i < a.size(); i++)
    {
       cout<<a.at(i)<<" ";
    }
    cout<<endl;
    cout<<a.empty()<<endl;;
    a.pop_front();
    // cout<<a.begin()<<endl;
    a.erase(a.begin(),a.begin()+2);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<" ";
    }
    cout<<endl;
    
     return 0;
}