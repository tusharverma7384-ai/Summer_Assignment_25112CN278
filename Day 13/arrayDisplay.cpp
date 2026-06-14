#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";
   cin>>n;  //input size of array 
   int arr[n];  //declare an array of size n
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){  //loop to input array elements 
      cin>>arr[i];  //store each element in the array 
   }
   cout<<"Final array: ";
   for(int i = 0; i<n; i++){
      cout<<arr[i]<<", ";  //print each element 
   }
}
