#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int age;

    void setStudent(string n, int a) {
        name = n;
        age = a;
    }

    void  getStendent() {
        cout << "Student name is " << name << endl;
        cout << "Student age id " << age << endl;
    }
};

int main() {
    Student s1, s2;
    s1.setStudent("Shad", 20);
    s1.getStendent();
    s2.setStudent("Biswajit", 20);
    s2.getStendent();
    return 0;
}