#include<iostream>
using namespace std;

template <class T>
void swapNumber(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 34, b = 45;
    cout<< "value of a = " << a << endl;
    cout<< "value of b = " << b << endl;
    swapNumber(a,b);
    cout<< "value of a = " << a << endl;
    cout<< "value of b = " << b << endl;
}