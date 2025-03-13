#include<iostream>
#include<queue>

using namespace std;
int main()
{
    //min heap
    priority_queue<int ,vector<int>,greater<int> >min;
    //max heap is default
  priority_queue<int>maxi;
  maxi.push(45);
  maxi.push(23);
  maxi.push(42);
  maxi.push(124);
  maxi.push(764);
  maxi.push(902);

int n= maxi.size();
  for (int i = 0; i < n; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
  }
  cout<<endl;
  
  min.push(122);
  min.push(3534);
  min.push(2);
  min.push(43);
  min.push(0);
  min.push(156);
cout<<"size of min heap"<<min.size()<<endl;
  int m= min.size();
  for (int i = 0; i < m; i++){
    cout<<min.top()<<" ";
    min.pop();
  }
  cout<<endl<<"after traversing min heap"<<min.size()<<endl;
}