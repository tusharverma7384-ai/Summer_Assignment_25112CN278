#include <iostream>
using namespace std;
int main(){
   int num;
   cout<<"Enter a number: ";
   cin>>num;

   int n1 = n, c = 0;
   while(n>0){
      c++;
      n/=2;
   }
   cout<<"Decimal number "<<n1<<" has "<<c<<"    bits";
}
