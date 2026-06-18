#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
    bool swapped;
    for(int i = 0; i<n-1; i++){
        swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
