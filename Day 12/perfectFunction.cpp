#include <iostream>
using namespace std;
bool isPerfect(int n){  //function to check whether a no. is perfect or not 
    int s = 0;  //sum of factors
    for(int i = 1; i<n; i++){  //loop from 1 to -n 
        if(n%i == 0)  //check if i is a factor of n 
            s+=i;  //add factor to sum
    }
    if(s == n)
        return true;
    else
        return false;
}
int main(){
   int n;
   cout<<"Enter a number to check: ";
   cin>>n;
   if(isPerfect(n))
    cout<<"It is a Perfect Number";
   else
    cout<<"It is not a Perfect Number";
}
