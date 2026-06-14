#include <iostream>
using namespace std;
int main(){
   int bin;
   cout<<"Enter a binary number: ";
   cin>>bin;
   int dec = 0;
   int c = 0;
   while(bin>0){
      int d = bin%10;
      dec += d*pow(2, c);
      c++;
      bin/=10;
   }
   cout<<dec;
}
