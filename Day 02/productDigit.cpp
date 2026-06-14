#include <iostream>
using namespace std;

int main(){
    int n, product = 1;
    cout<<"Enter a number: ";
    cin>>n;

    while(n>0){
        int d = n%10;
        product*=d;
        n/=10;
    }
    cout<<"The digits when multiplied give "<<product;
}
