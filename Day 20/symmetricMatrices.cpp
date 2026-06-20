#include <iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"Enter size: ";
    cin>>m;

    int arr[n][n];
    cout<<"Enter numbers for array 1: ";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i][j] != arr[j][i]){
                cout<<"The matrix is not symmetric";
                return 0;
            }
        }
    }
    cout<<"The matrix is symmetric";
}
