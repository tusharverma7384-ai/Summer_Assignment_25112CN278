#include <iostream>
using namespace std;
int fact(int n){  //function to calculate factorial
   int fact = 1;  //variable to store factorial result 
   for(int i = 2; i<=n; i++){  //loop from 2 to n
     fact*=i;  //multiply fact by current value of i
   }
   return fact;
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;  //input from user
   cout<<fact(n);  //call factorial function and display result 
}
