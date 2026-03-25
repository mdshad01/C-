#include<iostream>
using namespace std;

class Animal {
    protected:
    int a,b;
};

class Cat : public Animal {
    public:
    void sum() {
        cout << "Enter two number : ";
        cin >> a >> b;
        cout << "Sum of " << a << " and " << b << " = " << a + b << endl; 
    }
};

class Dog : public Animal {
    public:
    void mult() {
        cout << "Enetr two number : ";
        cin >> a >> b;
        cout << "Product of " << a << " and " << b << " = " << a*b << endl;
    }
};

int main() {
    Cat c;
    // c.sum();
    Dog d;
    d.mult();
    return 0;
}