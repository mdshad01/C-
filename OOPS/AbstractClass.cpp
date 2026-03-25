#include<iostream>
using namespace std;

class Shape {
    public:
    virtual void drow() = 0;
};

class Circle : public Shape {
    public:
    void drow() override {
        cout<<"Drow a circle" << endl;
    }
};

int main() {
    Circle c;
    c.drow();
    return 0;
}