#include<iostream>
using namespace std;

int maxArray(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int minArray(int arr[],int size){
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
     int arr[10]={23,34,323,34,67,3258,98,78,5,9867};
     cout<<"max value is "<<maxArray(arr,10)<<endl;
     cout<<"min value is "<<minArray(arr,10)<<endl;
     cout<<max(9,45)<<endl;
     for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
     }
}