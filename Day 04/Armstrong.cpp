#include <iostream>
#include <cmath>  //required for pow() function
using namespace std;

int main(){
    int n, s = 0, c = 0;
    cout<<"Enter a number to check: ";
    cin>>n;
    int n1 = n;  //store original number
    while(n>0){
        c++;
        n/=10;
    }
    n = n1;  //restore original number
    while(n>0){
        int d = n%10;  //extract last digit
        s+=pow(d, c);  //add d^c to sum
        n/=10;         //remove last digit
    }
    if(n1 == s)
        cout<<"The number is Armstrong";
    else
        cout<<"The number is not Armstrong";
}
