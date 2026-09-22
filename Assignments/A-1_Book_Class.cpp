#include <iostream>
using namespace std;

class Book
{
public:
    int id;
    string name;
    string author;
    float price;

    void input()
    {
        cout << "Enter Book ID: ";
        cin >> id;

        cout << "Enter Book Name: ";
        cin >> name;

        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\n--- BOOK DETAILS ---" << endl;
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;

    b.input();
    b.display();

    return 0;
}
