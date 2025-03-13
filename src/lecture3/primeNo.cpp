#include<iostream>
using namespace std;

int main(){

 cout<<"enter a number"<<endl;
 int n;
 int count;
 cin >> n;
 for(int i=2;i*i<n;i++){
   if(n%i==0){
    count++;
   }
 
}
if (count==0)
cout<<" prime"<<endl;
else
cout<<"not prime"<<endl;
}