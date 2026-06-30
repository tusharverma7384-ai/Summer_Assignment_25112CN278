#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

int rollNo[MAX];
string name[MAX];
float marks[MAX];
int countStudents = 0;

// Function to add student
void addStudent()
{
    if (countStudents >= MAX)
    {
        cout << "Student limit reached!\n";
        return;
    }

    cout << "\nEnter Roll Number: ";
    cin >> rollNo[countStudents];

    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name[countStudents]);

    cout << "Enter Marks: ";
    cin >> marks[countStudents];

    countStudents++;
    cout << "Student Added Successfully!\n";
}

// Function to display students
void displayStudents()
{
    if (countStudents == 0)
    {
        cout << "\nNo records found.\n";
        return;
    }

    cout << "\n----- Student Records -----\n";
    cout << "Roll\tName\t\tMarks\n";

    for (int i = 0; i < countStudents; i++)
    {
        cout << rollNo[i] << "\t"
             << name[i] << "\t\t"
             << marks[i] << endl;
    }
}

// Function to search student
void searchStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Search: ";
    cin >> roll;

    for (int i = 0; i < countStudents; i++)
    {
        if (rollNo[i] == roll)
        {
            cout << "\nStudent Found\n";
            cout << "Roll No : " << rollNo[i] << endl;
            cout << "Name    : " << name[i] << endl;
            cout << "Marks   : " << marks[i] << endl;
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Function to update marks
void updateMarks()
{
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < countStudents; i++)
    {
        if (rollNo[i] == roll)
        {
            cout << "Enter New Marks: ";
            cin >> marks[i];
            cout << "Marks Updated Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

// Function to delete student
void deleteStudent()
{
    int roll;
    cout << "\nEnter Roll Number to Delete: ";
    cin >> roll;

    for (int i = 0; i < countStudents; i++)
    {
        if (rollNo[i] == roll)
        {
            for (int j = i; j < countStudents - 1; j++)
            {
                rollNo[j] = rollNo[j + 1];
                name[j] = name[j + 1];
                marks[j] = marks[j + 1];
            }

            countStudents--;
            cout << "Record Deleted Successfully!\n";
            return;
        }
    }

    cout << "Student Not Found!\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n========== Student Management System ==========\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Marks\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateMarks();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 6);

    return 0;
}
