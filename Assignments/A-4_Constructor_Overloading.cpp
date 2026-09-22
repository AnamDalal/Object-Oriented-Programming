#include <iostream>
using namespace std;

class Book
{
public:
    string name;
    string author;
    int price;

    // Default Constructor
    Book()
    {
        name = "Unknown";
        author = "Unknown";
        price = 0;
    }

    // Parameterized Constructor
    Book(string n, string a, int p)
    {
        name = n;
        author = a;
        price = p;
    }

    void display()
    {
        cout << "Book Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    Book b2("C++", "Bjarne", 500);

    cout << "--- DEFAULT CONSTRUCTOR ---" << endl;
    b1.display();

    cout << "\n--- PARAMETERIZED CONSTRUCTOR ---" << endl;
    b2.display();

    return 0;
}
