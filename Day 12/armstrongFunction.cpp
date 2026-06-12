#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n){  //function to check armstrong number 
    int n1 = n, s = 0, c = 0;  //n1 stores original number, s stores sum, c counts digits
    while(n>0){  //loop to count digits 
        c++;  //increase digit count 
        n/=10;  //remove last digit 
    }
    n = n1;  //restore original 
    while(n>0){  //loop to calculate armstrong sum 
        int d = n%10;  //extract last digit 
        s+=pow(d, c);  //add digit raised to power c 
        n/=10;
    }
    if(n1 == s)
     return true;
    else
     return false;
}
int main(){
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   if(isArmstrong(n))
    cout<<"It is an Armstrong number";
   else
    cout<<"It is not an Armstrong number";
}
