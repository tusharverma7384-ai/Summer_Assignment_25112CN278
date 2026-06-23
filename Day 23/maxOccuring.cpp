#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    
    int index = -1, maxc = 0;
    for(int i = 0; i<s.length()-1; i++){
        int c = 0;
        for(int j = i+1; j<s.length(); j++){
            if(s[i] == s[j]){
                c++;
            }
        }
        if(c>maxc){
            maxc = c;
            index = i;
        }
    }
    cout<<"The maximum occuring character is "<<s[index];
}
