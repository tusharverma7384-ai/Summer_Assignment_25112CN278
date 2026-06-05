#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int s = 0;
    for(int i = 1; i<n; i++){  //find all proper factors of n
        if(n%i == 0)  //check if i is a factor of n
            s+=i;  //add factor to sum
    }
    if(s == n)
        cout<<"It is a Perfect number";
    else
        cout<<"It is not a Perfect number";
}
