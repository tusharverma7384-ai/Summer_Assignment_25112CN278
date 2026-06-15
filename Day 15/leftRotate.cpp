#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";  //ask user for array size 
   cin>>n;  //input array size 
   int arr[n];  //original array of size n
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){  //loop to input array elements 
      cin>>arr[i];  //store each element in array
   }
   int newarr[n];  //new array to store rotated array
   newarr[n-1] = arr[0];  //store first element at last index 
   for(int i = 0; i<n-1; i++){  //loop from 0 to n-2
    newarr[i] = arr[i+1];  //shift elements one position left
   }
   for(int i = 0; i<n; i++){
    cout<<newarr[i]<<" ";
   }
}
