#include <iostream>
using namespace std;

int main(){
    int n, s = 0;
    cout<<"Enter a number: ";
    cin>>n;

    while(n>0){
        int d = n%10;
        s+=d;
        n/=10;
    }
    cout<<"The sum of digits is "<<s;
}
