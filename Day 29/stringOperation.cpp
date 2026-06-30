#include <iostream>
#include <vector>
using namespace std;

void sort(string &s){
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            s[j] = tolower(s[j]);
            s[i] = tolower(s[i]);
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    }
}
void reverse(string &s){
    int start = 0;
    int end = s.length()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
int search(string s, char key){
    for(int i=0;i<s.length();i++){
        if(s[i]==key){
            return i;
        }
    }
    return -1;
}
bool isPalindrome(string s){
    string d = s;
    reverse(s);
    if(s == d){
        cout<<"The string is palindrome!";
        return true;
    }
    cout<<"The string is not palindrome!";
    return false;
}
int main(){
    string s;
    cout<<"Enter text: ";
    getline(cin, s);
    int c;
    cout<<"Enter your choice:\n1. Sorting alphabetically\n2. Reversing the string:\n3. Display the string: \n4. Searching a character: \n5. Check if text is palindrome: ";
    cin>>c;
    switch(c){
        case 1:
            sort(s);
            cout<<"The sorted string is: "<<s;
            break;
        case 2:
            reverse(s);
            cout<<"The reversed string is: "<<s;
            break;
        case 3:
            cout<<"The string is: "<<s;
            break;
        case 4:{
            char key;
            cout<<"Enter the character to search: ";
            cin>>key;
            int index = search(s, key);
            if(index != -1){
                cout<<"Character found at index: "<<index;
            } else {
                cout<<"Character not found!";
            }
            break;
        }
        case 5:{
            isPalindrome(s);
            break;
        }
        default:
            cout<<"Invalid choice!";
    }

    return 0;
}
