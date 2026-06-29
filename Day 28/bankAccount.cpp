#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    class Account{
        private:
            string name;
            int accNum;
            double balance;

        public:
            Account(){
                name = "";
                accNum = 0;
                balance = 0.0;
            }
            int getAccNum(){
                return accNum;
            }
            void enterDetails(){
                cout << "Enter Account Holder Name: ";
                getline(cin, name);
                cout << "Enter Account Number: ";
                cin >> accNum;
                cout << "Enter Initial Balance: ";
                cin >> balance;
            }

            void displayDetails(){
                cout << "Account Holder Name: " << name << endl;
                cout << "Account Number: " << accNum << endl;
                cout << "Balance: " << balance << endl;
            }

            void deposit(double amount){
                balance += amount;
                cout << "Amount Deposited: " << amount << endl;
            }

            void withdraw(double amount){
                if(amount > balance){
                    cout << "Insufficient Balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "Amount Withdrawn: " << amount << endl;
                }
            }
    };
    Account acc;
    vector<Account> accounts;
    cout<<"State Bank of India"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Enter your choice:"<<endl<<"1. Create Account"<<endl<<"2. Display Accounts"<<endl<<"3. Deposit"<<endl<<"4. Withdraw"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            acc.enterDetails();
            accounts.push_back(acc);
            break;
        case 2:
            for(auto& account : accounts){
                account.displayDetails();
            }
            break;
        case 3:
            cout<<"Enter Account Number: ";
            int accNum;
            cin>>accNum;
            cout<<"Enter amount to deposit: ";
            double amount;
            cin>>amount;
            for(auto& account : accounts){
                if(account.getAccNum() == accNum){
                    account.deposit(amount);
                    cout<<"Amount Deposited Successfully!"<<endl;
                    break;
                }
            }
            cout<<"No account found with the given account number!"<<endl;
            break;
        case 4:
            cout<<"Enter Account Number: ";
            cin>>accNum;
            cout<<"Enter amount to withdraw: ";
            cin>>amount;
            for(auto& account : accounts){
                if(account.getAccNum() == accNum){
                    account.withdraw(amount);
                    cout<<"Amount Withdrawn Successfully!"<<endl;
                    break;
                }
            }
            cout<<"No account found with the given account number!"<<endl;
            break;
        default:
            cout<<"Invalid Choice!"<<endl;
    }
    return 0;
}
