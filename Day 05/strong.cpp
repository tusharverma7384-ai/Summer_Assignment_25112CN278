#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 2; i<=n; i++){ //multiply no.from 2 to n
        fact*=i;
    }
    return fact;
}
int main(){
    int n, s = 0;
    cout<<"Enter a number: ";  //take input from user
    cin>>n;
    int n1 = n;   //store original no.
    while(n1>0){  //extract each digit of the no.
        int d = n1%10;  //get last digit
        s+= factorial(d);  //add factorial of digit to sum
        n1/=10;  //remove last digit
    }
    if(n == s)
        cout<<"This is a Strong number";
    else
        cout<<"This is not a Strong number";
}
