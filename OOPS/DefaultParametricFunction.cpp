#include<iostream>
using namespace std;

void sum(int x = 10, int y = 20, int z = 30) {
    cout<<"Sum = " << x + y + z << endl;
};

int main() {
    sum();
    sum(5);
    sum(5,15);
    sum(5,25,25);
    return 0;
}