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
        cout<<"Default Constructor Called"<<endl; 
    }

    // Parameterized Constructor

    Student(string n, int a) {
        name = n;
        age = a;
        cout<<"Parameterized Constructor Called"<<endl;
    }

    // Copy Constructor

    Student(Student &s){
        name = s.name;
        age = s.age;
    }

    // Student(Student)
    
    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<< age<<endl;
    }
};

int main() {
    Student s1("Shad",19),s2;
    s1.display();
    s2 = s1;
    s2.display();
    return 0;
}