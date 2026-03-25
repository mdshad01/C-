#include<iostream>
using namespace std;

class Base {
    protected:
    int a;
};

class Derived : public Base  {
    public:
    int b;
    void sum() {
        cout<<"Enter two number : ";
        cin>> a >> b;
        cout<<"Sum = "<< a + b << endl;
    }
};

int main() {
    Derived d;
    d.sum();
    return 0;
}