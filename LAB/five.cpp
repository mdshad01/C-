#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin.ignore(); // To ignore the newline character
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student students[10]; // Array of 10 Student objects

    // Input details for 10 students
    cout << "Enter details for 10 students:\n";
    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].inputDetails();
    }

    // Display student details
    cout << "\nStudent Details:\n";
    for (int i = 0; i < 10; i++) {
        students[i].displayDetails();
    }

    return 0;
}
