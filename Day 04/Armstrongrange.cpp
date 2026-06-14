#include <iostream>
#include <cmath>  //for pow() function
using namespace std;

bool isArmstrong(int n){
    int n1 = n, c = 0, s = 0;
    while(n>0){
        c++;  //increase digit count
        n/=10;  //remove last digit
    }
    n = n1;  //restore original number
    while(n>0){
        int d = n%10;  //extract last digit
        s+=pow(d, c);  //add d^c to sum
        n/=10;  //remove last digit
    }
    if(s == n1)
        return true;
    else
        return false;
}
int main(){
    int n;
    cout<<"Enter the end term: ";
    cin>>n;
    for(int i = 1; i<=n; i++){ //chech every no.from 1 to n
        if(isArmstrong(i))
            cout<<i<<" ";
    }
}
