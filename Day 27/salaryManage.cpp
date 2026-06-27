#include <iostream>
#include <vector>
using namespace std;
int main(){
    class Employee{
        private:
            string name;
            string designation;
            int id;
            double basicSalary;

            double bonus;
            double taxDeductions;
            double netSalary;
        
        public:
            Employee(){
                name = "";
                designation = "";
                id = 0;
                basicSalary = 0.0;
                bonus = 0.0;
                taxDeductions = 0.0;
                netSalary = 0.0;
            }

            void enterEmployeeDetails(){
                cout << "Enter Employee ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter Employee Name: ";
                getline(cin, name);
                cout << "Enter Employee Designation (Manager/Team Lead/Staff): ";
                getline(cin, designation);
                cout << "Enter Basic Salary: $";
                cin >> basicSalary;
            }
            void calculateBonus(){
                if(designation == "Manager"){
                    bonus = basicSalary * 0.1;
                } else if(designation == "Team Lead"){
                    bonus = basicSalary * 0.07;
                } else {
                    bonus = basicSalary * 0.05;
                }
            }

            void calculateTaxDeductions(){
                taxDeductions = (basicSalary + bonus) * 0.2; //GST = 20%
            }

            void calculateNetSalary(){
                netSalary = basicSalary + bonus - taxDeductions;
            }

            void displaySalaryDetails(){
                cout << "Employee ID: " << id << endl;
                cout << "Name: " << name << endl;
                cout << "Designation: " << designation << endl;
                cout << "Basic Salary: $" << basicSalary << endl;
                cout << "Bonus: $" << bonus << endl;
                cout << "Tax Deductions: $" << taxDeductions << endl;
                cout << "Net Salary: $" << netSalary << endl;
            }
    };

        vector<Employee> employees;
        int numEmployees;

        cout << "Enter the number of employees: ";
        cin >> numEmployees;

        for(int i = 0; i < numEmployees; i++){
            Employee emp;
            emp.enterEmployeeDetails();
            emp.calculateBonus();
            emp.calculateTaxDeductions();
            emp.calculateNetSalary();
            employees.push_back(emp);
        }

        cout << "\nSalary Details of Employees:\n";
        for(auto& emp : employees){
            emp.displaySalaryDetails();
            cout << "--------------------------\n";
        }

        return 0;
    
}
