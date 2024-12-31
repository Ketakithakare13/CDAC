#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    void initialize(string n, int i, double s) {
        name = n;
        id = i;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.initialize("Ketaki", 101, 50000);
    e2.initialize("Kittu", 102, 55000);

    e1.display();
    e2.display();

    return 0;
}
