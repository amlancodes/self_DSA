#include<iostream>
#include<array>
#include<vector>

using namespace std;
int main()
{
    vector<int>b;
    vector<int>a(5,2);
    vector<int>copy(a);
    cout<<copy.at(2)<<endl;
    b.push_back(3);
    cout<<"capacity "<<b.capacity()<<endl;
    b.push_back(5);
    cout<<"capacity "<<b.capacity()<<endl;
    b.push_back(4);
    cout<<"capacity "<<b.capacity()<<endl;
    b.push_back(87);
    cout<<"capacity "<<b.capacity()<<endl;
    b.push_back(12);
    cout<<"capacity "<<b.capacity()<<endl;

    cout<<b.front()<<endl;
    cout<<b.back()<<endl;

    cout<<"before pop"<<endl;
    for (int i = 0; i < b.size(); i++){
        cout<<b.at(i)<<" ";
        }
    cout<<endl;
    cout<<"after pop"<<endl;
    b.pop_back();
     for (int i = 0; i < b.size(); i++){
        cout<<b.at(i)<<" ";
        }
        cout<<endl;
    }
   
    

