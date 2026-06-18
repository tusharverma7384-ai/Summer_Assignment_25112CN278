#include <iostream>
#include <vector>
using namespace std;
int minArray(vector<int>& a, int startIndex){
    int min = 99999, minIndex = -1;
    for(int i = startIndex; i<a.size(); i++){
      if(a[i]<min){
        min = a[i];
        minIndex = i;
      }
    }
    return minIndex;
}
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        int t = arr[minArray(arr, i)];
        arr[minArray(arr, i)] = arr[i];
        arr[i] = t;
    }

    for(int i = 0; i<n; i++){
      cout<<arr[i]<<" ";
    }
}
