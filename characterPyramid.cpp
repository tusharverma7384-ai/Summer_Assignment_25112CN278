#include <iostream>
using namespace std;

string rowGenerator(int n){  //function to generate one row of the pyramid
   string firstHalf = "", result;  //first half stores ascending letters,result stores final palindrome
   char middleTerm = (char)(n + 64);  //convert n into corresponding uppercase letter
   for(char i = 'A'; i<=middleTerm; i++){  //generate ascending sequence
      firstHalf+=i;  //append current character to first half 
   }
   result = firstHalf;  
   for(int j = n-2; j>=0; j--){  //traverse first half backwards
      result += firstHalf[j];  //append characters to form palindrime
   }
   return result;
}
int main(){
   for(int i = 1; i<=5; i++){
      for(int k = i; k<=4; k++){
         cout<<" ";
      }
      cout<<rowGenerator(i)<<endl;
   }
}
