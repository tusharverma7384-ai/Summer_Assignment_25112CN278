#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cout<<"Enter two words: ";
    getline(cin, s1);
    getline(cin, s2);

    if(s1.length() == s2.length()){
        int index = -1;
        string word = "";
        for(int i = 0; i<s2.length(); i++){
            if(s1[0] == s2[i]){
                index = i;
                break;
            }
        }
        if(index == -1){
            cout<<"The two words are not rotations";
        }else{
            word = s2.substr(index)+s2.substr(0, index);
            if(word == s1)
                cout<<"The two words are rotations";
            else
                cout<<"The two words are not rotations";
        }
    }else{
        cout<<"The two words are not rotations";
    }
}
