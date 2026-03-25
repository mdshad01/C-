#include<iostream>
using namespace std;

class Frnd {
    private:
    int wage, day;
    public:
    Frnd(int w, int d) {
        wage = w;
        day = d;
    }
    friend void pay(Frnd f);
};

void pay(Frnd f) {
    cout << "total Price : " << f.wage * f.day << endl;
}

int main() {
    Frnd f(200,7), f2(400,10);
    pay(f);
    pay(f2);
    return 0;
}
