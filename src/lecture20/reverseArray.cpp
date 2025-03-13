//reversing array
#include<iostream>
using namespace std;
void reverseArray(int arr[],int size){
    int s=0;
    int e=size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}


int main()
{
 int arr[]={33,365,2353,45,79,579};
 int size=sizeof(arr)/sizeof(arr[0]);
 reverseArray(arr,size);
 for (int i = 0; i < size; i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;

 
}