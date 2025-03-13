#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        //this loop is for comparing 
    for(;j>=0;j--){
        if(arr[j]<temp){
            // shift
            
            arr[j+1]=arr[j];
        }
        else
        break;
    }
    arr[j+1]=temp;
}
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
     int arr[5]={33,5,98,7,56};
     selectionSort(arr,5);
     display(arr,5);
 return 0;
}