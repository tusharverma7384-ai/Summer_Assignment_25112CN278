#include <iostream>
using namespace std;

int main(){
    string s1, s2;
    cout<<"Enter two words: ";
    getline(cin, s1);
    getline(cin, s2);

    string common = "";
    for(int i = 0; i<s1.length(); i++){
        for(int j = 0; j<s2.length(); j++){
            if(s1[i] == s2[j]){
              common+= s2[j];
              common+=" ";
            }
        }
    }
    cout<<common<<" are the common characters";
}
