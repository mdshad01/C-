#include<iostream>
using namespace std;

class Complex {
    public:
    int rp,ip;

    Complex(int r, int i) {
        rp = r;
        ip = i;
    }

    // Hybride Constructor
    Complex(Complex &c1, int i) {
        rp = c1.rp;
        ip = i;
    }
    void show() {
        cout << rp << " + " << ip << "i" << endl;
    }
};

int main() {
    Complex c1(3,5);
    c1.show();
    Complex c2(c1,4);
    c2.show();
    return 0;
}