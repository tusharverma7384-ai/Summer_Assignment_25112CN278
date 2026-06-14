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
   int s, freq = 0;
   cout<<"Enter the element to search: ";
   cin>>s;
   for(int i = 0; i<n; i++){
      if(arr[i]==s)
        freq++;
   }
   if(freq>0)
    cout<<"Searched element found "<<freq<<" times";
   else
    cout<<"No such element found";
}
