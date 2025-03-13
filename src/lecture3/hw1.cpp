#include<iostream>
using namespace std;

int main(){
    cout<<"enter a character"<<endl;
    char a;
    cin >> a;
    int b = a;
    if(b>=48 && b<=57){
        cout<<"character is numeric"<<endl;
    }
    else if(b>=65 && b<=90){
         cout<<"character is capital"<<endl;
    }
    else if(b>=97 && b<=122){
          cout<<"character is numeric"<<endl;
    }
    else{
         cout<<"it is special character"<<endl;
    }
}