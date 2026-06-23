#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cout<<"Enter two words: ";
    getline(cin, s1);
    getline(cin, s2);
    string word = "";
    if(s1.length() == s2.length()){
        for(int i = 0; i<s1.length(); i++){
            for(int j = 0; j<s2.length(); j++){
                if(s1[i] == s2[j]){
                    word+=s1[i];
                }
            }
        }
        if(word.compare(s1) == 0)
            cout<<"The two words are an anagram";
        else
            cout<<"The two words are not an anagram";
    }else{
        cout<<"The two words are not an anagram";
    }
    
    
}
