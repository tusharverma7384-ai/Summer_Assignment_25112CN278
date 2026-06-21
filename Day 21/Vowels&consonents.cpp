#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    string rev = "";
    int vowels = 0, consonants = 0;
    for(int i = 0; i<s.length(); i++){
        if(isalpha(s[i]) != 0){
            if(s[i] == 'A'||s[i]=='E'||s[i] =='I'||s[i]=='O'||s[i]=='U'||s[i] == 'a'||s[i]=='e'||s[i] =='i'||s[i]=='o'||s[i]=='u')
                vowels++;
            else
                consonants++;
        }
    }
    cout<<vowels<<" vowels are in the string"<<endl<<consonants<<" consonants are found in the string";
}
