#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter number of terms for array 1: ";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n1; i++){
      cin>>arr1[i];
    }
    cout<<"Enter number of terms for array 2: ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n2; i++){
      cin>>arr2[i];
    }

    vector<int> resarr(n1+n2);
    for(int i = 0; i<n1+n2; i++){
        if(i<n1){
            resarr[i] = arr1[i];
        }else{
            resarr[i] = arr2[i - n1];
        }
    }
    for(int i = 0; i<n1+n2; i++){
        cout<<resarr[i]<<" ";
    }
}
