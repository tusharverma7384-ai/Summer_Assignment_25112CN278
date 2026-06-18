#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter numbers in ascending order: ";
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }
    int s;
    cout<<"Enter number to be searched: ";
    cin>>s;
    int beg = 0, end = n-1;
    int mid = (beg+end)/2;
    bool found = false;
    while(beg<=end){
        mid = (beg+end)/2;
        if(s==arr[mid]){
            found = true;
            break;
        }
        else if(s>arr[mid]){
            beg = mid+1;
        }else{
            end = mid - 1;
        }
    }
    if(found){
        cout<<"Number found at index "<<mid;
    }else{
        cout<<"No such number found";
    }
}
