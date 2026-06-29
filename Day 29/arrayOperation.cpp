#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
void reverse(vector<int> &arr){
    int start = 0;
    int end = arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int search(vector<int> arr, int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
void display(vector<int> arr){
    cout<<"The elements of the array are: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c;
    cout<<"Enter your choice:\n1. Sorting the array\n2. Reversing the array: \n3. Display the array: \n4. Searching an element: ";
    cin>>c;
    switch(c){
        case 1:
            sort(arr);
            display(arr);
            break;
        case 2:
            reverse(arr);
            display(arr);
            break;
        case 3:
            display(arr);
            break;
        case 4:{
            int key;
            cout<<"Enter the element to search: ";
            cin>>key;
            int index = search(arr, key);
            if(index != -1){
                cout<<"Element found at index: "<<index;
            } else {
                cout<<"Element not found!";
            }
            break;
        }
        default:
            cout<<"Invalid choice!";
    }

    return 0;
}
