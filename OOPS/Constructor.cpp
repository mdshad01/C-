#include<iostream>
using namespace std;

class Const {
    public:
    int n;
    Const() {
        n = 10;
        // cout<< "Value of n = "<< n << endl;
    }

    Const(int x) {
        n = x;
        // cout<<"Value of x = " << x<< endl;
    }

    Const(Const &p) {
        n = p.n;
    }

    void display() {
        cout<<"Value of n = "<< n << endl;
    }
};

int main() {
    Const c1,c2(30),c3(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}