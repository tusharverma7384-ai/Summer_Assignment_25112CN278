#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        string name;
        int rollNo;
        int marks[5];

        void enterRecords(){
            cout<<"Enter name of student: ";
            getline(cin, name);
            cout<<"Enter roll no.";
            cin>>rollNo;
            cout<<"Enter marks in order, (Physics, Graphics, Maths, EVS, PPS)";
            for(int i = 0; i<5; i++){
                cin>>marks[i];
            }
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNo<<endl;
            cout<<"Marks: "<<endl;
            cout<<"Physics: "<<marks[0]<<endl;
            cout<<"Graphics: "<<marks[1]<<endl;
            cout<<"Maths: "<<marks[2]<<endl;
            cout<<"EVS: "<<marks[3]<<endl;
            cout<<"PPS: "<<marks[4]<<endl;
        }
};

int main(){
    Student ob;
    ob.enterRecords();
    ob.display();
}
