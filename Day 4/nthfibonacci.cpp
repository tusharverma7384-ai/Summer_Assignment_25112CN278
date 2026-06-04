#include <iostream>
using namespace std;

int main(){
    int n, a = 0, b = 1;  //first two fibonacci
    int s = a + b;  //third fibonacci no.
    cout<<"Enter the position value to find: ";
    cin>>n;
    for(int i = 1; i<=n; i++){  //loop from 1 to n
        if(i == n){
            cout << b;  //print the nth fibonacci 
            break;  //exit the loop
        }
        a = b;
        b = s;
        s = a + b;
    }
}
