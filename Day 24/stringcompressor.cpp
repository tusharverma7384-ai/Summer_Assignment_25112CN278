#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    string word = "";
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' '){
            if(s[i+1]>='a'&&s[i+1]<='z'){
                s[i+1]-=32;
            }
            continue;
        }
        word+=s[i];
    }
    cout<<word;
}
