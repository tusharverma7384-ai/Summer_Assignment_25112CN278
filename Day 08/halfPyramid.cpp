#include <iostream>
using namespace std;
int main(){
  for(int i = 1; i<=5; i++){  //outer loop controls
     for(int j = 1; j<=i; j++){  //inner loop print starts
        cout<<"*";  //print star
     }
     cout<<endl;  //move to next line
  }
}
