#include <iostream>
#include <string> // It's good practice to include this when using string
using namespace std;

class ATMDetails {
    public:
        string name;
        long long accNo; // Changed from long to long long
        int pin;
        bool loggedIn;
        int money;

        ATMDetails(string n, long long ac, int p){
            name = n;
            accNo = ac;
            pin = p;
            loggedIn = false;
            money = 500;
        }

        void login(){
            long long ac; // Changed from long to long long
            cout << "Enter your 12-digit Account number: ";
            cin >> ac;
            if(ac == accNo){
                int p;
                cout << "Enter your pin: ";
                cin >> p;
                if(p == pin){
                    cout << "Logged in successfully\n";
                    loggedIn = true;
                } else {
                    cout << "Wrong login credentials\n";
                }
            } else {
                cout << "Wrong login credentials\n";
            }
        }

        void deposit(){
            if(loggedIn){
                int m;
                cout << "Enter amount to be deposited: ";
                cin >> m;
                cout << money << " :before deposition" << endl;
                money += m;
                cout << money << " :after deposition\n";
            } else {
                cout << "Login first\n";
            }
        }

        void withdraw(){
            if(loggedIn){
                int m;
                cout << "Enter amount to be withdrawn: ";
                cin >> m;
                if(money >= m){
                    cout << money << " :before withdrawal" << endl;
                    money -= m;
                    cout << money << " :after withdrawal\n";
                } else {
                    cout << "Not enough money\n";
                }
            } else {
                cout << "Login first\n";
            }
        }
};

int main(){
    string n;
    int p;
    long long a; // Changed from long to long long

    cout << "Sign up to open an account" << endl;
    cout << "Enter name: ";
    getline(cin, n);
    
    cout << "Set your own 12-digit Account number: ";
    cin >> a;
    
    cout << "Set your own 4-digit pin: ";
    cin >> p;
    
    ATMDetails ob(n, a, p);
    ob.login();
    
    int c = 0;
    while(c != 3){
        // Added a newline before "3. Exit" so the menu looks clean
        cout << "\nEnter your choice:" << endl << "1. Deposit money" << endl << "2. Withdraw money" << endl << "3. Exit: ";
        cin >> c;
        
        // Safety net: In case the user types a letter instead of a number for their choice
        if(cin.fail()) {
            cin.clear(); // Clears the error flag
            cin.ignore(10000, '\n'); // Discards the bad input
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch(c){
            case 1:
                ob.deposit();
                break;
            case 2:
                ob.withdraw();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }
    }
    return 0;
}
