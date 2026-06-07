#include <iostream>
using namespace std;
int fibonacci(int n){
   if(n == 0)  //fibonacci of 0 is 0
     return 0;
   else if(n == 1)  //fibonacci of 1 is 1
     return 1;
   else{
     return fibonacci(n - 2) + fibonacci(n -    1);
   }
}
int main(){
   int n;
  cout<<"Enter a number: ";//input position in fibonacci series
  cin>>n;
   for(int i = 1; i<=n; i++){
      cout<<fibonacci(i);
   }
}
