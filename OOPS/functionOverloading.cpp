#include<iostream>
using namespace std;

class Calc {
    public:
    void sum(int a, int b) {
        cout<< "Sum = " << a+b << endl;
        cout<<"1st Function is called" << endl;
    }

    void sum(float a, float b) {
        cout<<"Sum = " << a+b << endl;
        cout<<"2st Function is called" << endl;
    }
};

int main() {
    Calc c;
    c.sum(3,4);
    c.sum(3.5f,4.5f);
}

