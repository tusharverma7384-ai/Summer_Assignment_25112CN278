#include <iostream>
using namespace std;

int main(){
    int n, rev = 0;
    cout<<"Enter a number: ";
    cin>>n;
    int n1 = n;
    while(n>0){
        int d = n%10;
        rev = (rev * 10) + d;
        n/=10;
    }
    if(n1 == rev)
        cout<<"The number is palindrome";
    else
        cout<<"The number is not palindrome";
}
