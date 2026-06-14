#include <iostream>
using namespace std;
int main(){
   int dec, bin = 0;
   cout<<"Enter a number: ";
   cin>>dec;
   
   while(dec>0){
      int d = dec%2;
      bin = (bin*10) + d;
      dec/=2;
   }
   cout<<bin;
}
