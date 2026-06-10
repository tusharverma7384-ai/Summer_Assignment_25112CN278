#include <iostream>
using namespace std;
int main(){
   for(int i = 5; i>=1; i--){  //outer loop controls the rows
      for(int k = i; k<=4; k++){  //inner loop prints stars in each row
         cout<<" ";
      }
      for(int j = (2*i-1); j>=1; j--){
         cout<<"*";
      }
      cout<<endl;
   }
}
