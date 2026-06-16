#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n; i++){
       cin>>arr[i];
    }
    vector<int> newarr(n);
    int newIndex = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == -1){
            continue;
        }
        newarr[newIndex] = arr[i];
        newIndex++;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                arr[j] = -1;
            }
        }
    }
    int k = 0;
    while(newarr[k]!= 0){
        cout<<newarr[k]<<" ";
        k++;
    }
}
