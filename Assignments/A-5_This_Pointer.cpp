#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    string branch;

    Student(int rollNo, string name, string branch)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->branch = branch;
    }

    void display()
    {
        cout << "--- STUDENT DETAILS ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s(27, "Anam", "AI");

    s.display();

    return 0;
}
