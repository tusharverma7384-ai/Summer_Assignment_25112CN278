#include <iostream>
#include <random>
#include <vector>
using namespace std;
int main(){
    class Contact{
        private:
            string name;
            int phoneNumber;
        public:
            Contact(){
                name = "";
                phoneNumber = 0;
            }
            void enterContactDetails(){
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Phone Number: ";
                cin >> phoneNumber;
            }
            void displayContactDetails(){
                    cout << "Name: " << name << endl;
                    cout << "Phone Number: " << phoneNumber << endl;
            }
        };


    Contact contact;
    vector<Contact> contacts;
    cout<<"Contact Management System"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter your choice:"<<endl<<"1. Add contact"<<endl<<"2. Display Contacts"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            contact.enterContactDetails();
            contacts.push_back(contact);
            cout << "Contact added successfully!" << endl;
            break;
        case 2:
            for(auto &t : contacts){
                t.displayContactDetails();
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}
