#include<iostream>
using namespace std;

class Father {
    protected:
    int a;
};

class Mother {
    protected:
    int b;
};

class Son: public Father, Mother {
    public:
    void sum() {
        cout << "Enter two number : ";
        cin>> a >> b;
        cout << "Sum of two number : " << a << " and " << b << " = " << a+b << endl;
    }
};

int main() {
    Son s;
    s.sum();
    return 0;
}