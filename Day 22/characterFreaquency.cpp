#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    char ch;
    cout<<"Enter the character to find frequency of: ";
    cin>>ch; 
    int c = 0;
    for(int i = 0; i<s.length(); i++){
        if(ch == s[i])
            c++;
    }
    cout<<"The character "<<ch<<" was found "<<c<<" times";
}
