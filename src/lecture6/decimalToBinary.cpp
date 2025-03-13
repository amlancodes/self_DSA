#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout<<"enter s number"<<endl;
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
       int digit= n&1;
       ans=(digit*pow(10,i))+ans;
       n=n>>1;
       i++;
    }
    cout<<"In Binary "<<ans<<endl;

}