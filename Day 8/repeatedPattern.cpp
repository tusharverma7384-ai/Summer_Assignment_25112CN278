#include <iostream>  //header file for input and output
using namespace std;  //allows use of cout without std
int main(){
   for(int i = 1; i<=5; i++){  //outer loop controls rows
      for(int j = 1; j<=i; j++){  //inner loop controls columns
         cout<<i;  //print row no.repeatedly
      }
      cout<<endl;
   }
}
