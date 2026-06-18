#include <iostream>
#include <vector>
using namespace std;
int maxArray(vector<int>& a, int startIndex){
    int max = 0, maxIndex = -1;
    for(int i = startIndex; i<a.size(); i++){
      if(a[i]>max){
        max = a[i];
        maxIndex = i;
      }
    }
    return maxIndex;
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
        int t = arr[maxArray(arr, i)];
        arr[maxArray(arr, i)] = arr[i];
        arr[i] = t;
    }

    for(int i = 0; i<n; i++){
      cout<<arr[i]<<" ";
    }
}
