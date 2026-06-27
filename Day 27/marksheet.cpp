#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        string name;
        int rollNo;
        int marks[5];
        string schoolName;

        void enterRecords(){
            cout<<"Enter name of student: ";
            getline(cin, name);
            cout<<"Enter roll no.";
            cin>>rollNo;
            cin.ignore(); // To ignore the newline character after entering roll no.
            cout<<"Enter school name: ";
            getline(cin, schoolName);
            cout<<"Enter marks in order, (Physics, Graphics, Maths, EVS, PPS)";
            for(int i = 0; i<5; i++){
                cin>>marks[i];
            }
        }
        void display(){
            cout<<"-------------Central Board of Secondary Education 2026-27-------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Roll Number: "<<rollNo<<endl;
            cout<<"School Name: "<<schoolName<<endl;
            cout<<"Marks: "<<endl;
            cout<<"Physics: "<<marks[0]<<endl;
            cout<<"Graphics: "<<marks[1]<<endl;
            cout<<"Maths: "<<marks[2]<<endl;
            cout<<"EVS: "<<marks[3]<<endl;
            cout<<"PPS: "<<marks[4]<<endl;
            cout<<"Total Marks: "<<marks[0]+marks[1]+marks[2]+marks[3]+marks[4]<<endl;
            cout<<"Percentage: "<<((double)(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]))/5.0<<"%"<<endl;
            cout<<"-------------End of line-------------"<<endl;
        }
};

int main(){
    Student ob;
    ob.enterRecords();
    ob.display();
}
