#include<iostream>
using namespace std;

class Base {
    public:
    virtual void show() {
        cout<< "Base class show function is colled" << endl;
    }
};

class Derived : public Base {
    public:
    void show() {
        cout<< "Derived calss is called" << endl;
    }
};

int main() {
    Base *b;
    Derived d;
    // d.show();
    b = &d;
    b->show();
    return 0;
}