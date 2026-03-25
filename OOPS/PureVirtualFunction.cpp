#include<iostream>
using namespace std;

class Mammals {
    public:
    virtual void walk() = 0; 
};

class Human : public Mammals {
    public:
    void walk() {
        cout<<"walks on two legs" << endl;
    }
};

class Dog : public Mammals {
    public:
    void walk() {
        cout<<"walks on four legs" << endl;
    }
};

int main() {
    Human h;
    // h.Mammals :: eat();
    h.walk();
    Dog d;
    d.walk();
    return 0;
}