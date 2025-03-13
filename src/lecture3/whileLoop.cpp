#include<iostream>
using  namespace std;

int main (){
    int n =10;
    int sum=0;
    int i=1;
   // cout<<i<<endl;
   /*
   while(i<=n){
        cout<<" "<<i<<" "<<endl;
        i++;
    }*/ 
   while(i<=n){
    sum+=i;
    i++;
   }
   cout<<"sum is "<<sum<<endl;
}