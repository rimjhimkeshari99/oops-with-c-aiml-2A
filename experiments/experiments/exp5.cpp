#include <iostream>
using namespace std;

class Employee {
private:
    int employeeId;
    string name;
    float salary;

public:
    // Default constructor
    Employee() {
        employeeId = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s) {
        employeeId = id;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee &e) {
        employeeId = e.employeeId;
        name = e.name;
        salary = e.salary;
    }

    // Const member function
    void display() const {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    void updateSalary(float newSalary) {
        salary = newSalary;
    }
};

int main() {
    const Employee e1(101, "Riya", 50000);

    cout << "Const Employee Object:" << endl;
    e1.display();


    Employee e2(e1);

    cout << "\nCopied Employee Object:" << endl;
    e2.display();

    return 0;
}