#include<iostream>
using namespace std;
class Calc {
    private:
    int wage, day;
    public:
    Calc(int w, int d) {
        wage = w; 
        day = d;
    }

    friend void pay(Calc c); 
};

void pay(Calc c) {
    cout<< "Total payment = " << c.wage * c.day << endl;
}

int main() {
    Calc c(200,7);
    pay(c);
    return 0;
}