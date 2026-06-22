#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    int c = 0;
    for(int i = 0; i<s.length() - 1; i++){
        if((s[i] == ' ') && (s[i+1]!=' ')){
            c++;
        }
    }
    cout<<"There are "<<(c+1)<<" words in the sentence";
    
}
