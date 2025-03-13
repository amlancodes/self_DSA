#include<iostream>
using namespace std;

void swapAlyernate(int arr[],int size){
    for (int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
void display(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arro[9]={32,54,123,22,77,54,35,77,12};
    int arr[10]={32,54,123,22,77,54,35,77,12,900};
     
     swapAlyernate(arro,9);
     display(arro,9);
     swapAlyernate(arr,10);
     display(arr,10);
}