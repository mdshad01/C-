#include<iostream>
using namespace std;

class Parent {
   protected:
    int a;
    public:
    Parent() {
        cout<<"Parent is Called"<<endl;
    }
    ~Parent() {
        cout<<"Parent destructor is Called"<<endl;
    }
};

class Child : public Parent {
    int b;
    public:
    Child() {
        cout<< "Child is Called"<< endl;
    }
    ~Child() {
        cout<< "Child destructor is Called"<< endl;
    }
    void add() {
        cout<<"Enter two number : ";
        cin>>a>>b;
        cout<<"Sum of "<< a << " and " << b << " = " << a+b << endl; 
    }
};

int main() {
    Child c;
    // c.add();
    return 0;
}