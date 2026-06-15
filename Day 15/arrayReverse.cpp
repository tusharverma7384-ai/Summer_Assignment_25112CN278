#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";  //ask user for array size 
   cin>>n;  //input array size 
   int arr[n];  //original array
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){  //loop to input elements 
      cin>>arr[i];  //store each element in array 
   }
   int newarr[n];  //new array to store reversed elements 
   for(int j = 0; j<n; j++){  //loop to fill reversed array 
      newarr[j] = arr[n - 1 - j];  //copy elements from end to start 
   }
   for(int k = 0; k<n; k++){  //loop to display reversed array 
    cout<<newarr[k]<<" ";  //print each reversed element 
   }
}
