#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    string word = "", longestWord = "";
    int maxL = 0;
    for(int i = 0; i<s.length(); i++){
        
        if(s[i] == ' '){
            if(word.length()>maxL){
                maxL = word.length();
                longestWord = word;
            }
            word = "";
        }else{
            word+=s[i];
        }
    }
    cout<<"The longest word is "<<longestWord;
}
