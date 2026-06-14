#include <iostream>
using namespace std;
int main(){
   int n, p, res = 1;
   cout<<"Enter a number and power: ";
   cin>>n>>p;
   for(int i = 1; i<=p; i++){
      res*=n;
   }
   cout>>n>>" ^ ">>p>>" = ">>res;
}
