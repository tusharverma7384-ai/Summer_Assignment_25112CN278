#include <iostream>
#include <string>
#include <random>
using namespace std;
class Employee{
    public:
        string name;
        int empNo;
        long salary;
        string address;
        long mobileNo;
        string email;

        string PAN;
        long long accountNo;
        string bankName;
        string IFSCCode;

        string jobTitle;
        string department;
        bool employmentStatus;
        string managerName;
        string dateOfJoining;

        int generateEmpNo(){
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distr(1000, 9999);
            return distr(gen);
        }
        void enterRecords(){
            cout<<"Enter name of Employee: ";
            getline(cin, name);
            empNo = generateEmpNo();
            cout<<"Enter salary: ";
            cin>>salary;
            cin.ignore(); // To ignore the newline character left by cin
            cout<<"Enter address: ";
            getline(cin, address);
            cout<<"Enter mobile number: ";
            cin>>mobileNo;
            cin.ignore(); // To ignore the newline character left by cin
            cout<<"Enter email: ";
            getline(cin, email);
            cout<<"Enter PAN number: ";
            getline(cin, PAN);
            cout<<"Enter bank account number: ";
            cin>>accountNo;
            cin.ignore(); // To ignore the newline character left by cin
            cout<<"Enter bank name: ";
            getline(cin, bankName);
            cout<<"Enter IFSC code: ";
            getline(cin, IFSCCode);
            cout<<"Enter job title: ";
            getline(cin, jobTitle);
            cout<<"Enter department: ";
            getline(cin, department);
            cout<<"Enter employment status (1 for active, 0 for inactive): ";
            cin>>employmentStatus;
            cin.ignore(); // To ignore the newline character left by cin
            cout<<"Enter manager's name: ";
            getline(cin, managerName);
            cout<<"Enter date of joining (DD-MM-YYYY): ";
            getline(cin, dateOfJoining);
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Employee Number: "<<empNo<<endl;
            cout<<"Salary: "<<salary<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Mobile Number: "<<mobileNo<<endl;
            cout<<"Email: "<<email<<endl;
            cout<<"PAN Number: "<<PAN<<endl;
            cout<<"Bank Account Number: "<<accountNo<<endl;
            cout<<"Bank Name: "<<bankName<<endl;
            cout<<"IFSC Code: "<<IFSCCode<<endl;
            cout<<"Job Title: "<<jobTitle<<endl;
            cout<<"Department: "<<department<<endl;
            cout<<"Employment Status: "<<(employmentStatus ? "Active" : "Inactive")<<endl;
            cout<<"Manager's Name: "<<managerName<<endl;
            cout<<"Date of Joining: "<<dateOfJoining<<endl;
        }
};

int main(){
    Employee ob;
    ob.enterRecords();
    ob.display();
}
