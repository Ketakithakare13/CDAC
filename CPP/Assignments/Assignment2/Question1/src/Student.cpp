#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Setter and Getter for name
    void setName(const string &studentName) {
        name = studentName;
    }

    string getName() const {
        return name;
    }

    // Setter and Getter for roll number
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    // Setter and Getter for marks
    void setMarks(float mark) {
        marks = mark;
    }

    float getMarks() const {
        return marks;
    }

    // Setter and Getter for grade
    void setGrade(char g) {
        grade = g;
    }

    char getGrade() const {
        return grade;
    }

    // Function to calculate grade
    void calculateGrade() {
        if (marks >= 90 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 80 && marks < 90) {
            grade = 'B';
        } else if (marks >= 70 && marks < 80) {
            grade = 'C';
        } else if (marks >= 60 && marks < 70) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }
};

int main() {
    Student S1;
    int choice;

    while (true) {
        cout << "\nMenu" << endl;
        cout << "1. Accept Information" << endl;
        cout << "2. Display Information" << endl;
        cout << "3. Calculate Grade" << endl;
        cout << "4. Exit the Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            int rollNumber;
            float marks;

            cout << "Enter student's name: ";
            cin>>name;
            cout << "Enter student's roll number: ";
            cin >> rollNumber;
            cout << "Enter student's marks: ";
            cin >> marks;

            // Set the student's information
            S1.setName(name);
            S1.setRollNumber(rollNumber);
            S1.setMarks(marks);

            cout << "Information accepted successfully!" << endl;
            break;
        }
        case 2: {
            // Display student information
            cout << "\nStudent Information" << endl;
            cout << "Name: " << S1.getName() << endl;
            cout << "Roll Number: " << S1.getRollNumber() << endl;
            cout << "Marks: " << S1.getMarks() << endl;
            cout << "Grade: " << S1.getGrade() << endl;
            break;
        }
        case 3: {
            // Calculate and display the grade
            S1.calculateGrade();
            cout << "Grade calculated: " << S1.getGrade() << endl;
            break;
        }
        case 4: {
            cout << "Exiting the program." << endl;
            return 0;
        }
        default: {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
        }
    }

    return 0;
}
