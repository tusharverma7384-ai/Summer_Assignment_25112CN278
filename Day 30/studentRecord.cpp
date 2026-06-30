#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Student {
    private:
        string name;
        int age;
        int rollNumber;
    public:
        Student();
        void addRecords(){
            cout<<"Enter your name: ";
            getline(cin, name);
            cout<<"Enter your age: ";
            cin>>age;
            cout<<"Enter your roll number: ";
            cin>>rollNumber;
        }
        void displayRecords(){
            cout<<"---------------"<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll Number: "<<rollNumber<<endl;
            cout<<"---------------"<<endl;
        }
};
int main() {
    //This comment is to try github.dev
    vector<Student> students;
    cout<<"Enter number of students: ";
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        Student temp;
        temp.addRecords();
        students.push_back(temp);
    }
    cout<<"Student Records: "<<endl;
    for(int i=0; i<students.size(); i++){
        students[i].displayRecords();
    }
}
