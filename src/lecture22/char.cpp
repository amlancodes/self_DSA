#include<iostream>
using namespace std;

//reversing a string
//done in leetcode

//find length of string 
int getLength(char arr[]){
    int count=0;
    for (int i=0 ; arr[i] != '\0' ; i++){
        count++;
    }
    return count; 
}

//to lowerCase characters
char toLowerCase(char x){
    if(x>='a' && x<='z'){
        return x;
    }
    else{
        return (x-'A')+'a';
    }
}
//check palindrome
bool isPalindrome(char arr[]){
    int s=0;
    int e=getLength(arr)-1;
    while(s<e){
        if(arr[s]!=arr[e])
            return 0;
        else{
            s++;
            e--;
        }
    }
  return 1;       

}

int main()
{
    char nam[20];
    cout<<"enter your name"<<endl;
    cin>>nam;
    cout<<"your name is "<<endl;
    cout<<nam<<endl;
    cout<<getLength(nam)<<endl;
    
    // char name[50]=ddfksvlnscds;
    cout<< isPalindrome(nam)<<endl;
    //reversing string
    cout<<toLowerCase('A')<<endl;
    cout<<toLowerCase('a')<<endl;
    cout<<toLowerCase('X')<<endl;
 return 0;
}
