#include <iostream>
using namespace std;
int main(){
   for(int i = 1; i<=5; i++){  //outer loop controls the rows
      for(int j = 1; j<=i; j++){  //inner loop print no.from 1to n
         cout<<j;  //print the current number
      }
      cout<<endl;  //move next line after each row
   }
}
