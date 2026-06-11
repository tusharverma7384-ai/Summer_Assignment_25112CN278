#include <iostream>
using namespace std;
bool isPrime(int n){  //function to check whether a no. is prime or not 
   for(int i = 2; i<n; i++){  //check divisibility from 2 to -1
      if(n%i==0)  //if n is divisible ny i
       return false;
   }
   return true;
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   if(isPrime(n))
    cout<<n<<" is Prime";
   else
    cout<<n<<" is not Prime";
}
