#include<iostream>
using namespace std;

void ascendBubbleSort(int arr[],int size){
    for(int j=size-1;j>0;j--){
          for(int i=0;i<j;i++){
              if(arr[i+1]<arr[i]){
                swap(arr[i+1],arr[i]);
              }
           }
      }
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={344,56435,7632,565,2436,458,989};

    ascendBubbleSort(arr,7);
    display(arr,7);
}