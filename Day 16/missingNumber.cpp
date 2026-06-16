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
    int totalSum = n*(n+1)/2, sum = 0;
    for(int i = 0; i<n; i++){
      sum+= arr[i];
    }
    cout<<"The missing number is "<<(totalSum-sum);
}
