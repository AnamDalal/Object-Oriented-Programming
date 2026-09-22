#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string branch;

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "\n--- STUDENT DETAILS ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
