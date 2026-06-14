#include <iostream>
using namespace std;
//recursive function to calculate factorial
int fact(int n){
//Base case: factorial of 0 or 1 is 1    
    
   if(n == 0 || n == 1)
     return 1;
   else
    return n * fact(n-1);
}
int main(){
   int n;
   //calculate and display factorial
   cout<<"Enter a number: ";
   cin>>n;
   cout<<fact(n);
}
