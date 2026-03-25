#include<iostream>
using namespace std;

class Circle {
    public:
    int r;

    Circle(int n) {
        r = n;
    }
    void area() {
        cout<< "Area = " << 3.14 * r * r << endl;
    }

    void operator ++() {
        r = r * 10;
    }

    void operator --() {
        r = r / 10;
    }
};

int main() {
    Circle c(5);
    c.area();
    ++c;
    c.area();
    --c;
    c.area();
    return 0;
}
