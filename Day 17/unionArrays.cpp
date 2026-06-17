#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter number of terms for array 1: ";
    cin>>n1;
    vector<int> arr1(n1);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n1; i++){
      cin>>arr1[i];
    }
    cout<<"Enter number of terms for array 2: ";
    cin>>n2;
    vector<int> arr2(n2);
    cout<<"Enter numbers: ";
    for(int i = 0; i<n2; i++){
      cin>>arr2[i];
    }
    //Merge the two arrays
    vector<int> combArr(n1+n2);
    for(int i = 0; i<n1+n2; i++){
        if(i<n1){
            combArr[i] = arr1[i];
        }else{
            combArr[i] = arr2[i - n1];
        }
    }

    //Find intersection of the arrays
    vector<int> intersection(min(n1, n2));
    int interIndex = 0;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n2; j++){
            if(arr1[i] == arr2[j]){
              intersection[interIndex] = arr2[j];
              interIndex++;
            }
        }
    }
    //cout<<"interIndex: "<<interIndex<<endl;

    intersection.resize(interIndex);//Reduces array size to make space

    /* Code block used for debugging 
    cout<<"Merged array: ";
    for(int i = 0; i<n1+n2; i++){
        cout<<combArr[i]<<" ";
    }
    cout<<endl<<"Intersection: ";
    for(int i = 0; i<intersection.size(); i++){
        cout<<intersection[i]<<" ";
    }
    cout<<endl;
    */
    


    vector<int> unionArr(n1+n2);
    int unionIndex = 0;
    interIndex = 0;
    for(int j = 0; j<n1+n2;j++){
        if(intersection[interIndex] == combArr[j]){
            if(interIndex == (intersection.size()-1)){
                unionArr[unionIndex] = combArr[j];
                unionIndex++;
                continue;
            }else{
                interIndex++;
                continue;
            }
            
        }
        unionArr[unionIndex] = combArr[j];
        unionIndex++;
    }
    for(int i = 0; unionArr[i]!=0; i++){
        cout<<unionArr[i]<<" ";
    }
    
}
