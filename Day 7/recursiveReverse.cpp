#include <iostream>
using namespace std;
int reverse(int n, int rev){
   if(n == 0)  //Base case : when no.becomes 0
    return rev;
   else
   //add last digit of n to reversed no.
    return reverse(n/10, (rev*10)+n%10);
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   cout<<reverse(n, 0);  //call recursive function 
}
