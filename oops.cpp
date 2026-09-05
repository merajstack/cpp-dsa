#include <iostream>
#include <string>
using namespace std;

// Encapsulation: Wrapping data and member functions inside a single unit called a class.
class bankacc {
private:
    string password;
    double balance;
    double accountId;

public:
    string username;
    string usermail;
};

// A constructor automatically runs when an object is created.
// Its main purpose is to initialize the object.
class Employee {
private:
    int salary;
    int id;

public:
    string name;
    string role;
    string desk;

    // Non-parameterized constructor
    Employee() {
        cout << "Employee data fetched" << endl;
        name = "Meraj";//initializer
        role = "Engineer";
    }

    // Parameterized constructor
    Employee(string n, string r, string d) {
        name = n;
        role = r;
        desk = d;
    }

    void getInfo() {

        cout << name << endl;
        cout << desk << endl;
    }
};

int main() {

    bankacc u1;

    u1.usermail = "meraj@gmail.com";
    u1.username = "Meraj";

    string arr1[3] = {u1.usermail, u1.username};

    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        cout << arr1[i] << endl;
    }

    Employee e1;

    cout << e1.name << endl;

    Employee e2("Meraj MD", "Engineer", "desk1");

    e2.getInfo();

    return 0;
}
