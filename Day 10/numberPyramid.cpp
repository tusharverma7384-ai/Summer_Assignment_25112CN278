#include <iostream>
using namespace std;
int main(){
   int base = 0;  //starting numbers
   for(int i = 1; i<=5; i++){  //loop for rows
      base = base*10 + 1;  //creates numbers
      for(int k = i; k<=4; k++){  //prints leading spaces for pyramid shape
         cout<<" ";
      }
      cout<<base*base;  //print square of generated number
      cout<<endl;
   }
}
