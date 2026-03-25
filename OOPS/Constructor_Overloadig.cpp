#include<iostream>
using namespace std;
// WAP to find area of square , circle, triangle
class Area {
    public:
    Area(int a) {
        cout<< "Area of square : " << a*a << endl;
    }

    Area(float r) {
        cout<< "Area of Circle : " << 3.14 * r * r << endl;
    }

    Area(int l, int b) {
        cout << "Area of Triangle : " << 0.5 * l * b << endl;
    }
};

int main() {
    Area a1(5), a2(2.5f), a3(2,5);
    return 0;
}