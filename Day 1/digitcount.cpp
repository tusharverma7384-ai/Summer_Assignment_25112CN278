#include <iostream>
using namespace std;

int main(){
    int n, c = 0;
    cout<<"Enter a number: ";
    cin>>n;

    while(n>0){
        c++;
        n/=10;
    }
    cout<<"It has "<<c<<"digits";
}
