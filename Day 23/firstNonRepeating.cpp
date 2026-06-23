#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    
    char ch;
    bool repeat = false;
    for(int i = 0; i<s.length()-1; i++){
        repeat = false;
        for(int j = i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                repeat = true;
                break;
            }
        }
        if(!repeat){
          ch = s[i];
          break;
        }
    }
    cout<<ch<<" is the first non-repeating character";
}
