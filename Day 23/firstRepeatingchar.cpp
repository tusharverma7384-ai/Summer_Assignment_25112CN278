#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    
    char ch;
    for(int i = 0; i<s.length()-1; i++){
        for(int j = i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                ch = s[i];
                break;
            }
        }
        if(ch!='\0')
          break;
    }
    cout<<ch<<" is the first repeating character";
}
