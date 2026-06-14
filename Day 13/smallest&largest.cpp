#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";
   cin>>n;
   int arr[n];
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){
      cin>>arr[i];
   }
   int min = 2147483647;
   int max = 0;
   for(int i = 0; i<n; i++){
      if(arr[i]>max)
       max = arr[i];
      if(arr[i]<min)
       min = arr[i];
   }
   cout<<"The largest number is "<<max<<" and the smallest is "<<min;
}
