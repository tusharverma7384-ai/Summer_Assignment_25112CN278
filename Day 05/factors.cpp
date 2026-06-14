#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<1<<endl;
    for(int i = 2; i<n; i++){  //check no.from 2 to n
        if(n%i == 0)
            cout<<i<<endl;  //print the factor
    }
    cout<<n<<endl;
}
