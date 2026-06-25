#include <iostream>
#include <string>
using namespace std;

//Code completed
int main(){
    int n;
    cout<<"Enter number of names: ";
    cin>>n;
    string names[n];
    cout<<"Enter names: ";
    for(int i = 0; i<n; i++){
        getline(cin>>ws, names[i]);
    }
    bool swapped;
    for(int i = 0; i<n-1; i++){
        swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(names[j]>names[j+1]){
                string t = names[j+1];
                names[j+1] = names[j];
                names[j] = t;
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
    for(int i = 0; i<n; i++){
        cout<<names[i]<<" ";
    }
}
