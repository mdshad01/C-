#include<iostream>
using namespace std;

class Area {
    public:
    void square();
    void circle();
    void triangle();
};

void Area :: square() {
    int a;
    cout<< "Enter a number : ";
    cin >> a;
    cout<< " Area of sqaure =  " << a * a <<  endl;
}

void Area :: circle() {
    int r;
    cout<< "Enter circle radius : ";
    cin>> r;
    cout<< "Area of circle = " << 3.14 * r * r << endl;
}

void Area :: triangle() {
    int l,b;
    cout << "Enter triangle length and breadth : ";
    cin>>l>>b;
    cout<<"Area of triangle = " << 0.5 * l * b << endl;
}

int GCD(int x, int y) {
    while(x != y) {
        if(x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    return x;
}
int main() {

    cout<<GCD(94,14) << endl;
    return 0;
}