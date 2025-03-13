#include<iostream>
#include<cmath>
using namespace std;

int main(){
     long long n;
     cout<<"enter a binary number"<<endl;
     cin>>n;
     int i=0;
     int ans =0;
     while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=(1<<i)+ans;
        }
        n=n/10;
        i++;
     }
     cout<<"in decimal "<<ans<<endl;

}