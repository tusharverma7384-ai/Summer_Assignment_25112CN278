#include <iostream>
using namespace std;
class Quiz{
    public:
        string question[5] = {"Who invented C++?", "What is C++?", "Which of the following is the correct syntax of including a user defined header files in C++?", "Which of the following is used for comments in C++?", "Which of the following extension is used for user-defined header file in c++?"};
        string options[5][4] = {{"Dennis Ritchie", "Ken Thompson", "Brian Kernighan", "Bjarne Stroustrup"}, 
                                {"C++ is an object oriented programming language", "C++ is a procedural programming language", "C++ supports both procedural and object oriented programming language", "C++ is a functional programming language"}, 
                                {"#include [userdefined]", "#include \"userdefined\"", "#include <userdefined.h>", "#include <userdefined>"}, 
                                {"/* comment */", "// comment */", "// comment", "both // comment or /* comment */"}, 
                                {"hg", "cpp", "h", "hf"}};
        char correct[5] = {'D', 'C', 'B', 'D', 'C'};
        string name;
        int score;
        Quiz(){
            name = "";
            score = 0;
        }
        void getName(){
            cout<<"Enter your name: ";
            getline(cin, name);
        }
        void runQuiz(){
            char ans;
            for(int i = 0; i<5; i++){
                cout<<"Question "<<i+1<<": "<<question[i]<<endl;
                for(int j = 0; j<4; j++){
                     cout<<(char)(j+65)<<") "<<options[i][j]<<endl;
                }
                cout<<"Enter your answer: ";
                cin>>ans;
                if(ans == correct[i] || ans - correct[i] == 32){
                    cout<<"\nCorrect! 100 points added\n"<<endl;
                    score+=100;
                }else{
                    cout<<"\nWrong! 20 points deducted\n"<<endl;
                    score-=20;
                }
            }
        }
        void showResult(){
            cout<<"Name: "<<name<<endl<<"Total points: "<<score;
        }
};

int main(){
    Quiz ob;
    ob.getName();
    ob.runQuiz();
    ob.showResult();
}
