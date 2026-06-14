#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number of terms: ";
   cin>>n;
   int arr[n];  //declare array of size n 
   cout<<"Enter numbers: ";
   for(int i = 0; i<n; i++){  //loop to input array elements 
      cin>>arr[i];  
   }
   int sum = 0;  //initialize sum with 0
   float avg;  //variable to store average 
   for(int i = 0; i<n; i++){  //loop to calculate sum 
      sum+=arr[i];  //add each element to sum 
   }
   avg = (float)sum/n;  //calculate avg
   cout<<"The sum of values is "<<sum<<" and the average is "<<avg;
}
