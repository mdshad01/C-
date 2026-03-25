#include<iostream>
using namespace std;

int a = 5; // global variable

int main() {
    int a = 10; // local variable
    cout<< "a = " << a << endl;
    cout << "a = " << ::a << endl;
    return 0;
}