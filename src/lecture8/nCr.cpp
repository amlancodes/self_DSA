#include<iostream>
using  namespace std;

int nCr(int n , int r){
     int rFact=1;
     for(int i=r;i>=1;i--){
        rFact=rFact*i;
     }
     int numerator=1;
     for(int i=0;i<r;i++){
        numerator=numerator*n;
        n--;
     }
     return numerator/rFact;
}


int main(){
     int a,b;
     cout<<"enter number a"<<endl;
     cin>>a;
     cout<<"enter number b"<<endl;
     cin>>b;
     int ans=nCr(a,b);
     cout<<" aCb "<<ans<<endl;
}