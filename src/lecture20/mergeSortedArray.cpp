#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,int n,vector<int> &b,int m,vector<int> &sorted){
   
    int i = 0;
    int j = 0;
    while (i < n  &&  j < m){
        if(a.at(i)<=b.at(j)){
            sorted.push_back(a.at(i));
            i++;
        }
        else{
            sorted.push_back(b.at(j));
            j++;
        }    
    }
    while(i < n){
        sorted.push_back(a.at(i));
        i++;
    }
    while (j < m){
        sorted.push_back(b.at(j));
        j++;
    }
}

int main(){
    vector<int>arr1;
    vector<int>arr2;
    vector<int>arr3;
    arr1.push_back(12);
    arr1.push_back(45);
    arr1.push_back(46);
    arr1.push_back(56);
    arr1.push_back(347);
    arr1.push_back(985);
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(1032);
    arr2.push_back(34);
    

    merge(arr1,arr1.size(),arr2,arr2.size(),arr3);
    for (int i = 0; i < arr3.size(); i++){
        cout<<arr3.at(i)<<" ";
    }
    cout<<endl;
    
 
}