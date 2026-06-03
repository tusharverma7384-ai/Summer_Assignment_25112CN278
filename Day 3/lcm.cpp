#include <iostream>
using namespace std;

int gcd(int n1, int n2){
    int n = min(n1, n2);
    int gcd;
    for(int i = 1; i<=n; i++){
	    if(n1%i == 0 && n2%i == 0)
		    gcd = i;
    }
    return gcd;
}
int main(){
    int n1, n2;
    int n = min(n1, n2);
    cout<<"Enter 2 numbers: ";
    cin>>n1>>n2;
    cout << (n1/gcd(n1, n2)) * n2;
}
