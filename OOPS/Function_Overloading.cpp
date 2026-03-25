#include<iostream>
using namespace std;

class Calc {
    public:
    void volume(int a) {
        cout << "Volume of cube : " << a*a*a << endl;
    }

    void volume(float r) {
        cout<< " volume of sphere : " << (4* 3.14 * r * r * r) / 3 << endl;
    }

    void volume(int l, int b, int h) {
        cout<< "Volume of cuboid : " << l*b*h << endl;
    }
};
int main() {
    Calc c;
    c.volume(5);
    c.volume(2.5f);
    c.volume(2,3,5);
    return 0;
}