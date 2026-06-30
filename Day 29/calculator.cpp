#include <iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter operator (+, -, *, /): ";
    cin>>op;

    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            if(b!=0)
                cout<<a/b;
            else
                cout<<"Error: Division by zero!";
            break;
        default:
            cout<<"Invalid operator!";
    }
    return 0;
}
