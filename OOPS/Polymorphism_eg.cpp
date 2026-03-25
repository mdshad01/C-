#include<iostream>
using namespace std;

class Animal {
    public:
    void sound() {
        cout<< "Animal is making sound." << endl;
    }
};

class Dog : public Animal {
    public:
    void sound() {
        cout << "Dog is makiing sound wow wow." << endl;
    }
};

class Cat : public Animal {
    public:
    void sound() {
        cout<< "Cat is making sound meow meow" << endl;
    }
};

class Addition {
    public:
    void sum(int a, int b) {
        cout<< "Sum = " <<  a+b << endl;
    }

    void sum(int a, int b, int c) { 
        cout << "Sum = " << a+b+c << endl;
    }
};


int main() {
    Addition a;
    a.sum(5,6);
    a.sum(5,6,7);
    return 0;
}