#include <iostream>
using namespace std;
int main(){
   for(char i = 'A'; i<='E'; i++){  //outer loop controls the rows
      for(int j = 'A'; j<=i; j++){  //inner loop prints A repeatedly
         cout<<i;  //prints character A
      }
      cout<<endl;  //next line
   }
}
