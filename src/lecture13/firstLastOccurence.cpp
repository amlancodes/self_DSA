#include<iostream>
using namespace std;

int firstOccur(int arr[],int size,int key){
    int s=arr[0];
    int e=arr[size-1];
    while(s<=e){
        int mid=s+((e-s)/2);
        if(key<=arr[mid]){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
     }
     return -1;

}

int main(){

}