#include<iostream>
using namespace std;

class Dest {
    public:
    ~Dest() {
        cout<< "Destructor is called" << endl;
    }
    Dest() {
        cout<< "Constructor is called" << endl;
    }
};
int main() {
    Dest d;
    return 0;
}