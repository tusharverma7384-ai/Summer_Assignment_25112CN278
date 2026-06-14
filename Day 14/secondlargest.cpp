#include <iostream>
using namespace std;
int max(int n[], int l){
    int max = 0;
    for(int i = 0; i<l; i++){
        if(n[i]>max)
         max = n[i];
    }
    return max;
}
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int arr[n];
    cout<<"Enter numbers: ";
    for(int i = 0; i<n; i++){
       cin>>arr[i];
    }
    int maximum = max(arr, n), secMax = 0;

    for(int i = 0; i<n; i++){
       if(arr[i]>secMax&&arr[i]<maximum)
        secMax = arr[i];
    }
    cout<<secMax<<" is the second largest number";
}
