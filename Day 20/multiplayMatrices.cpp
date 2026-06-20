#include <iostream>
using namespace std;
int main(){
    int m, n, n2;
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

    cout<<"Enter number of columns for array 2: ";
    cin>>n2;

    int arr2[n][n2];
    cout<<"Enter numbers for array 2: ";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n2; j++){
            cin>>arr2[i][j];
        }
    }
    int resarr[m][n2] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n2; j++){
            for(int k = 0; k<n; k++){
                cout<<arr1[i][k]<<"*"<<arr2[k][i]<<endl;
                resarr[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(int i = 0; i<m; i++){
        for(int j = 0; j<n2; j++){
            cout<<resarr[i][j]<<" ";
        }
        cout<<endl;
    }
}
