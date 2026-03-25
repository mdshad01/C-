#include<iostream>
using namespace std;

class Shape {
    public:
    virtual double area() = 0;
};

class Circle : public Shape {
    public:
    int r;
    Circle(int n) {
        r = n;
    }
    double area() override {
        return 3.14 * r * r;
    }
};

class Square : public Shape {
    public:
    int a;
    Square(int n) {
        a = n;
    }
    double area() override {
        return a * a;
    }
};

int main() {
    Circle c(5);
    Square s(5);
    cout<<"Area of Circle = "<<c.area()<<endl;
    cout<<"Area of Square = "<<s.area()<<endl;
    return 0;
}