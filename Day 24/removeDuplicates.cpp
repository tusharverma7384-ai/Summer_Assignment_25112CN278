#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    
    string word = "";
    for(int i = 0; i<s.length(); i++){
        for(int j = i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                s[j] = '\0';
            }
        }
        word+=s[i];
    }
    cout<<word;
}
