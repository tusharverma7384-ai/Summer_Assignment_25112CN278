#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter number of rows: ";
    cin>>m;
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr1[m][n];
    cout<<"Enter numbers for array 1: ";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[m][n];
    cout<<"Enter numbers for array 2: ";
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr2[i][j];
        }
    }
    int resarr[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            resarr[i][j] = arr1[i][j]-arr2[i][j];
        }
    }
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<resarr[i][j]<<" ";
        }
    }
}
