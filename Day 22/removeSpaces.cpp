#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    string newword = "";
    
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' ')
            continue;
        else
            newword+=s[i];
    }
    cout<<newword;
}
