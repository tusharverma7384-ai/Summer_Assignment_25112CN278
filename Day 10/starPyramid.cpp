#include <iostream>
using namespace std;
int main(){
   for(int i = 1; i<=5; i++){
      for(int k = i; k<=4; k++){
         cout<<" ";
      }
      for(int j = 1; j<=(2*i-1); j++){
         cout<<"*";
      }
      cout<<endl;
   }
}
