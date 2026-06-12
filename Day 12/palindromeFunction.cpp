#include <iostream>
using namespace std;
bool isPalindrome(int n){
    int rev = 0;
    int n1 = n;
    while(n>0){
        int d = n%10;
        rev = (rev * 10) + d;
        n/=10;
    }
    if(n1 == rev)
     return true;
    else
     return false;
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   if(isPalindrome(n))
    cout<<"The number is Palindrome";
   else
    cout<<"The number is not Palindrome";
}
