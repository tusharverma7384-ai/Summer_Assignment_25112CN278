#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";
   cin>>n;  //input array size 
   int arr[n];  //declare array of size n 
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){  //loop to input array elements 
      cin>>arr[i];  //input each element 
   }
   int even = 0, odd = 0;  
   for(int i = 0; i<n; i++){  //loop to check each element
      if(arr[i]%2 == 0)  //if remainder is 0 , no. is even 
       even++;  //increase even counter 
      else
       odd++;  //increase odd counter 
   }
   cout<<"There are "<<even<<" even elements and "<<odd<<" odd elements";  //display even and odd count 
}
