#include<iostream>
using namespace std;

class Test {
    public:
    int a,b;
    void add(int a, int b) {
        cout<<a+b<<endl;
    }
};

int main() {
    Test t1, t2;
    t1.add(2,3);
    t2.add(4,5);
    return 0;
}