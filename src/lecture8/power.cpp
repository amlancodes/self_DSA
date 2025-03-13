#include<iostream>
using namespace std;

int power(int num1,int num2){
    int ans =1;
    for (int i=0;i<num2;i++){
        ans =ans*num1;
    }
    return ans;
}

int main(){
    int a,b;
     cout<<"enter number a"<<endl;
     cin>>a;
     cout<<"enter number b"<<endl;
     cin>>b;
     int ans=power(a,b);
     cout<<"a raised to the power b is "<<ans<<endl;
}