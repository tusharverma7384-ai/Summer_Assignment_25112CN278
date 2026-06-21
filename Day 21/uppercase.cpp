#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    for(auto x:s){
        cout<<(char) toupper(x);
    }
}
