#include <iostream>
using namespace std;
void fibonacci(int n){  //function to print fibonacci series 
    int a = 0, b = 1;   //first two fiboancci numbers 
    int s = a + b;  //calculate next term
    for(int i = 1; i<=n; i++){  //loop runs n times 
        cout<<b<<" ";  //print current fibonacci number 
        a = b;
        b = s;
        s = a + b;  //calculate next term 
    }
}
int main(){
  int n;
  cout<<"Enter number of terms: ";
  cin>>n;
  fibonacci(n);
}
