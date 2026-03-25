#include<iostream>
using namespace std;
class Animal {
    public:
    void sound() {
        cout<<"Animal have sound"<<endl;
    }
};

class Cat : public Animal {
    public:
    void sound1() {
        cout<<"Cat sound MEOW MEOW"<<endl;
    }
};

int main() {
    Cat c;
    c.sound();
    return 0;
}