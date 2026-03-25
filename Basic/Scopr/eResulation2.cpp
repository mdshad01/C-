#include<iostream>
using namespace std;

class Fact {
    public:
    int i,f,n;
    void input();
    void process();
    void output();
};

void Fact :: input() {
    cout<< "Enter a number : " << endl;
    cin>> n;
}

void Fact :: process() {
    f = 1;
    for(i=1;i<=n;i++) {
        f = f * i;
    }
}

void Fact :: output() {
    cout<<"Factorial of " << n << " is " << f << endl;
}

int main() {
    Fact f;
    f.input();
    f.process();
    f.output();
    return 0;
}