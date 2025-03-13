#include<iostream>
 using namespace std;

void reversed(int arr[],int size){
    int s=0;
    int e= size-1;
    while(s<=e){
        swap(arr[s],arr[e]);
     /*
     int temp=arr[s];
        arr[s]=arr[e];
        arr[e] =temp;
        */ 
        s+=1;
        e-=1;
       }
}
int main(){
     int arr[10]={23,34,323,34,67,3258,98,78,5,9867};
     int arro[9]={23,34,323,34,67,3258,98,78,567};
     reversed(arr,10);
     for(int i=0;i<10;i++){
        cout<<arr[i]<<",";
    
     }
     cout<<endl;
     reversed(arro,9);
     for(int i=0;i<9;i++){
        cout<<arro[i]<<",";
    
     }
     cout<<endl;
 }