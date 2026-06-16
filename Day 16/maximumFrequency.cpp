#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int mostFreqEle(vector<int> &arr){
  int n = arr.size();
  unordered_map<int, int> freq;
  for(int i = 0; i<n; i++){
    freq[arr[i]]++;
  }
  int maxCnt = 0, res = -1;
  for(auto i : freq){
    int val = i.first, cnt = i.second;

    if(maxCnt<cnt || (cnt == maxCnt && val>res)){
      res = val;
      maxCnt = cnt;
    }
  }
  return res;
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
    cout<< mostFreqEle(arr)<<" is mentioned most of the times.";
}
