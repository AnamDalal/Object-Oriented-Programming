#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    string department;
    float salary;

    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Department: ";
        cin >> department;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\n--- EMPLOYEE DETAILS ---" << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}
