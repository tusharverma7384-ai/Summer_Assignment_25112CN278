#include <iostream>
using namespace std;

int main(){
    int n, a = 0, b = 1;
    int s = a + b;
    cout<<"Enter number of terms: ";  //input the numbers
    cin>>n;
    for(int i = 1; i<=n; i++){
        cout<<b<<" ";  //print the current term
        a = b;  //update values for next iteration
        b = s;
        s = a + b;  
    }
}
