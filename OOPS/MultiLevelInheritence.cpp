#include<iostream>
using namespace std;

class Animal {
    protected:
    int a;
};

class Dog : public Animal {
    protected:
    int b;
};

class Tom : public Dog {
    public:
    int sum;

    void add() {
        cout << "Enter two number : ";
        cin >> a >> b;
        sum = a + b;
        cout << "Sum of two " << a << " and " << b << " = " << sum << endl;
    }
};

int main() {
    Tom t;
    t.add();
    return 0;
}