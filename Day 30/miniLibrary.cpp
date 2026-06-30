#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <stdexcept>
using namespace std;
int main(){
    class Borrower{
        private:
            string name;
            string book;
            int num;
            string date;
            string issueDate;
            int fine;
        
        public:
            Borrower(){
                name = "";
                book = "";
                num = 0;
                date = "";
                issueDate = "";
                fine = 0;
            }

            void enterBorrowerDetails(){
                cout << "Enter Book number: ";
                cin >> num;
                cin.ignore();
                cout << "Enter Borrower Name: ";
                getline(cin, name);
                cout << "Enter Book borrowed: ";
                getline(cin, book);
                cout << "Enter Issue Date(DD-MM-YYYY): ";
                getline(cin, issueDate);
                cout << "Enter Return Date(DD-MM-YYYY): ";
                getline(cin, date);
                fine = fineCalculate(calculateDays());
            }

            void displayBorrowerDetails(){
                cout << "Name: " << name << endl;
                cout << "Book: " << book << endl;
                cout << "Book number: " << num << endl;
                cout << "Issue Date: " << issueDate << endl;
                cout << "Return Date: " << date << endl;
                cout << "Fine: " << fine << endl;
            }
            bool isValidDate(int year, int month, int day) {
                if (year < 1 || month < 1 || month > 12 || day < 1) return false;

                // Days in each month
                int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

                // Leap year check
                bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
                if (isLeap)
                    daysInMonth[1] = 29;

                return day <= daysInMonth[month - 1];
            }

            // Function to convert date to sys_days (C++20) or manual chrono workaround
            std::chrono::sys_days toSysDays(int year, unsigned int month, unsigned int day) {
                using namespace std::chrono;
                return sys_days{std::chrono::year{year} / std::chrono::month{month} / std::chrono::day{day}};
            }
            int calculateDays(){
                //Days since 01-01-0000
                int issueDay = stoi(issueDate.substr(0, 2));
                unsigned int issueMonth = stoi(issueDate.substr(3, 5));
                int issueYear = stoi(issueDate.substr(6));

                int returnDay = stoi(date.substr(0, 2));
                unsigned int returnMonth = stoi(date.substr(3, 5));
                int returnYear = stoi(date.substr(6));
                
                auto date1 = toSysDays(issueYear, issueMonth, issueDay);
                auto date2 = toSysDays(returnYear, returnMonth, returnDay);
                int days = date2.time_since_epoch().count() - date1.time_since_epoch().count();
                
                return days;
            }

            int fineCalculate(int days){
                if(days > 15){
                    fine = (days - 15) * 5;
                } else {
                    fine = 0;
                }
                return fine;
            }
    };

    vector<Borrower> Borrowers;
    int numBorrowers;
    int c = 0;
    cout<<"Enter your choice: \n1. Enter a new record\n2. Display all records\n3. Exit\n";
    cin>>c;
    switch(c){
        case 1:
            cout << "Enter the number of Borrowers: ";
            cin >> numBorrowers;

            for(int i = 0; i < numBorrowers; i++){
                Borrower emp;
                emp.enterBorrowerDetails();
                Borrowers.push_back(emp);
            }
            break;
        case 2:
            cout << "\nDetails of borrowers:\n";
            for(auto& emp : Borrowers){
                emp.displayBorrowerDetails();
                cout << "--------------------------\n";
            }
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
