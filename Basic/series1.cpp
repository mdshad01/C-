#include<iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c;
    cout << a << " " << b << " ";
    for(int i = 3; i <= 5; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    return 0;
}