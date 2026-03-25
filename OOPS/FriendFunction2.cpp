#include<iostream>
using namespace std;

class Friend {
    private:
    int wage, day;
    public:
    Friend(int w, int d) {
        wage = w;
        day = d;
    } 

    friend void pay(Friend f); 
};

void pay(Friend f) {
    cout<<"Total price = " << f.wage * f.day << endl;
}

int main() {
    Friend f1(200,7),f2(400,10);
    pay(f1);
    pay(f2);
    return 0;
}