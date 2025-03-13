#include<iostream>
#include<vector>
using namespace std;
vector<int> reverseFromIndex(vector<int> v,int m){
    int s=m+1;
    int e=v.size()-1;
    while (s<=e)
    {
       swap(v.at(s),v.at(e));
       s++;
       e--;
    }
  return v;
}

int main()
{
 vector<int> arr;
 arr.push_back(232);
 arr.push_back(23);
 arr.push_back(56);
 arr.push_back(76);
 arr.push_back(35);
 arr.push_back(98);

 for (int i = 0; i < arr.size(); i++)
 {
      cout<<arr.at(i)<<" ";

 }
 cout<<endl;
  
  vector<int> ans = reverseFromIndex(arr,3);
  for (int i = 0; i < ans.size(); i++)
 {
      cout<<ans.at(i)<<" ";

 }
 cout<<endl;
}