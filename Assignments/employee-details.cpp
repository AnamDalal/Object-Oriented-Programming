#include <iostream>
#include <string>
using namespace std;

class employee
{
public:
    int employeeID;
    string employee_department;
    float employee_salary;

    void display()
    {
        cout << "---------- OOP COMPANY ----------" << endl;
        cout << "Employee ID         : " << employeeID << endl;
        cout << "Employee Department : " << employee_department << endl;
        cout << "Employee Salary     : " << employee_salary << endl;
    }
};

int main()
{
    employee e1;

    e1.employeeID = 111;
    e1.employee_department = "AI/ML";
    e1.employee_salary = 100000.00;

    e1.display();

    return 0;
}
