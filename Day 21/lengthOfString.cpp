#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);

    int sum = 0;
    int i = 0;
    while(s[i] != '\0'){
        sum++;
        i++;
    }
    
    cout<<sum<<" is th length of the string";
}
