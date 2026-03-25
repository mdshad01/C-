#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    // Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parametrize Constructor
    Student(string n, int a) {
        name = n;
        age = a;
    }
    // Copy Constructor
    Student(Student &s) {
        name = s.name;
        age = s.age;
    }

    void display() {
        cout<< "Student name is " << name << endl;
        cout<< "Student age is " << age << endl;
    }
};

int main() {
    Student s1, s2("Shad",20);
    s1.display();
    s2.display();
    s1 = s2;
    s1.display();
    return 0;
}