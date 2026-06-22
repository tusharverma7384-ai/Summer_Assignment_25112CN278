#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    string rev = "";
    
    for(int i = s.length() - 1; i>=0; i--){
        rev+=s[i];
    }
    
    if(s.compare(rev) == 0){
        cout<<"The string is palindrome";
    }else{
        cout<<"The string is not palindrome";
    }
}
