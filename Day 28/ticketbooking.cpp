#include <iostream>
#include <random>
#include <vector>
using namespace std;
int main(){
    class TicketBooking{
        private:
            string name;
            int age;
            string gender;
            string home;
            string destination;
            int ticketNumber;
        public:
            TicketBooking(){
                name = "";
                age = 0;
                gender = "";
                home = "";
                destination = "";
                ticketNumber = 0;
            }
            void bookTicket(){
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter Age: ";
                cin >> age;
                cout << "Enter Gender: ";
                cin.ignore();
                getline(cin, gender);
                cout<< "Enter Starting station: ";
                getline(cin, home);
                cout << "Enter Destination: ";
                getline(cin, destination);
                generateTicketNumber();
            }
            void generateTicketNumber(){
                random_device rd;
                mt19937 gen(rd());
                uniform_int_distribution<> dis(1000, 9999);
                ticketNumber = dis(gen);
            }
            void displayTicketDetails(){
                    cout << "Ticket Number: " << ticketNumber << endl;
                    cout << "Name: " << name << endl;
                    cout << "Age: " << age << endl;
                    cout << "Gender: " << gender << endl;
                    cout << "Home: " << home << endl;
                    cout << "Destination: " << destination << endl;
            }
        };

    TicketBooking ticket;
    vector<TicketBooking> tickets;
    cout<<"Railway Ticket Booking System"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter your choice:"<<endl<<"1. Book Ticket"<<endl<<"2. Display Tickets"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            ticket.bookTicket();
            tickets.push_back(ticket);
            cout << "Ticket booked successfully!" << endl;
            break;
        case 2:
            for(auto &t : tickets){
                t.displayTicketDetails();
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
}
