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
   int newarr[n];
   newarr[0] = arr[n-1];
   for(int i = 0; i<n-1; i++){
    newarr[i+1] = arr[i];
   }
   for(int i = 0; i<n; i++){
    cout<<newarr[i]<<" ";
   }
}
