#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key ){
    int s= 0;
    int e=size-1;
    //CONSIDERING NUMBERS IN ARRAY ARE  IN INCREASING ORDER
    while(s<=e){
        int mid=s+((e-s)/2);
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
    }
    return -1;
}
int main(){
     int even[12]={1,3,4,5,6,7,8,9,12,45,45,89};
     int odd[13]={2,3,4,5,6,7,8,9,10,45,56,77,89};
     cout<<binarySearch(even,12,9)<<endl;
     cout<<binarySearch(odd,13,10)<<endl;
}