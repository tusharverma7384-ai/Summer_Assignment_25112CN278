#include <iostream>
#include <vector>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";  //take size of array from user
   cin>>n;
   vector<int> arr(n);  //create vector of size n
   cout<<"Enter numbers: ";  //input array elements
   for(int i = 0; i<n; i++){
      cin>>arr[i];
   }
   vector<int> newarr(n);
   int newIndex = 0;  //points to position where next non zero element at index 
   for(int i = 0; i<n; i++){  //move all non zero elements to the front 
    if(arr[i] == 0)
     continue;
    newarr[newIndex] = arr[i];
    newIndex++;
   }
   for(int i = 0; i<n; i++){
    cout<<newarr[i]<<" ";
   }
}
