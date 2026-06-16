#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, sum;
    cout<<"Enter number of terms: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    cout<<"Enter the number to be the sum: ";
    cin>>sum;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            int s = arr[i]+arr[j];
            if(s == sum)
                cout<<"("<<arr[i]<<", "<<arr[j]<<") ";
        }
    }
}
