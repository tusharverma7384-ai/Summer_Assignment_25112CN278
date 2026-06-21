#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    string rev = "";
    
    for(int i = s.length() - 1; i>=0; i--){
        rev+=s[i];
    }
    cout<<rev;
}
