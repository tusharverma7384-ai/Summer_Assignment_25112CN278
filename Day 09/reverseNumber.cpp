#include <iostream>
using namespace std;
int main(){
   for(int i = 1; i<=5; i++){  //outer loop controls the rows
      for(int j = i; j<=5; j++){ //inner loop prints no.from i to 5
         cout<<j;  //print value of j
      }
      cout<<endl;  //next line
   }
}
