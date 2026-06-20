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
    int columnSum = 0;
    for(int i = 0; i<m; i++){
        columnSum = 0;
        for(int j = 0; j<n; j++){
            columnSum+=arr1[j][i];
        }
        cout<<columnSum<<endl;
    }
}
