#include <iostream>
using namespace std;
int maximum(int a, int b){  //function definition to find maximum
   if(a>=b)  //check if a is greater than b
    return a;
   else
    return b;
}
int main(){
   int a, b;
   cout<<"Enter two numbers: ";
   cin>>a>>b;
   cout<<maximum(a,b);  //display maximum number
}
