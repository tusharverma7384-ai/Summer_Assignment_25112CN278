#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    vector<int> arr(n);  //create vector of size n
    cout<<"Enter numbers: ";
    for(int i = 0; i<n; i++){
       cin>>arr[i];
    }
    vector<int> newarr(n);  //new vector to store duplicate elements 
    int newIndex = 0;  //index for newarr
    for(int i = 0; i<n; i++){  //traverse original array 
        if(arr[i] == -1){  //skip element if already marked 
            continue;
        }
        
        for(int j = i+1; j<n; j++){  //campare with remaining elements 
            if(arr[i] == arr[j]){  //duplicate found 
                newarr[newIndex] = arr[i];  //store duplicate in new array 
                newIndex++;  //move to next posotion 
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
