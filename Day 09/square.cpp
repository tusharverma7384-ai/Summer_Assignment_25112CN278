#include <iostream>
using namespace std;
int main(){
   cout<<"*****"<<endl;
   for(int i = 1; i<=3; i++){  //outer loop controls rows
      cout<<"*";
      for(int j = 1; j<=3; j++){  //inner loop controls column
         cout<<" ";  
      }
      cout<<"*"<<endl;
   }
   cout<<"*****";
}
