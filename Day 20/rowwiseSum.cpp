#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter numbers for array 1: ";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int rowSum = 0;
    for(int i = 0; i<m; i++){
        rowSum = 0;
        for(int j = 0; j<n; j++){
            rowSum+=arr[i][j];
        }
        cout<<rowSum<<endl;
    }
}
