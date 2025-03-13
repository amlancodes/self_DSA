#include<iostream>
using namespace std;


void descendSelectionSort(int arr[],int size){
   
    for(int i=0;i<size-1;i++){
         int maxIndex=i;
        for(int j=i;j<size;j++){
           if(arr[maxIndex]<arr[j])
                 maxIndex=j;
            }
        swap(arr[maxIndex],arr[i]); 
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={43,232,6,7,9,2445};
    descendSelectionSort(arr,6);
    display(arr,6);
}