#include<iostream>
using namespace std;

class Car {
    private:
    int speed;
    string brand;

    public:
    void setDetails(int s, string b) {
        speed = s;
        brand = b;
    }
    public:
    void showDetails(){
         cout<<"Brand: " << brand << endl;
        cout<<"Speed: " << speed << endl;
    }
};

int main() {
    Car c1,c2;
    c1.setDetails(400 , "Bugatti");
    c1.showDetails();
    c2.setDetails(200 , "Toyota");
    c2.showDetails();
    return 0;
}