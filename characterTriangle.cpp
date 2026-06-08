#include <iostream>
using namespace std;
int main(){
   for(char i = 'A'; i<='E'; i++){  //outer loop for rows
      for(int j = 'A'; j<=i; j++){ //inner loop print character
         cout<<j;  //print character
      }
      cout<<endl;  //next line
   }
}
