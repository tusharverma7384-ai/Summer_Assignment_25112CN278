#include <iostream>
#include <random>
using namespace std;

//Code completed
int main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distr(1, 100);
    
    int n, guess = distr(gen);
    while(n!= guess){
        cout<<"Enter your guess: ";
        cin>>n;
        if(n>guess)
            cout<<"Try a bit lower"<<endl;
        else if (n<guess)
            cout<<"Try a bit higher"<<endl;
    }
    cout<<"You Win!";
}
