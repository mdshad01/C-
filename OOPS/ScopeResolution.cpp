#include<iostream>
using namespace std;

int a = 10;

int main() {
    int a = 20;
    cout<<"value of a = " << a << endl;
    cout<<"value of a = " << ::a << endl;
    return 0;
}