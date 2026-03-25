#include<iostream>
using namespace std;

class Dest {
    public:
    int a;
    Dest() {
        a=0;
        cout<<a<<endl;
        cout<<"Hello! Everyone"<<endl;

    }
    ~Dest() {
        a=5;
        cout<<a<<endl;
        cout<<"Bye! Bye!"<<endl;
    }
};
int main() {
    Dest d;
    return 0;
}