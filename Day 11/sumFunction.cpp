#include <iostream>
using namespace std;
int sum(int a, int b){
   return a+b;
}
int main(){
   int a, b;
   cout<<"Enter two numbers to sum: ";
   cin>>a>>b;
   cout<<sum(a,b);
}
