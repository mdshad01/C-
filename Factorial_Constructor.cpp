// Finf factorial of a number using default Constructor
#include<iostream>
using namespace std;

class Factorial {
    public:
    int a, fact =1;
    Factorial() {
        cout<<"Enter a number : ";
        cin>>a;
        for(int i=1;i<=a;i++) {
            fact = fact * i;
        }
        cout<<"Factorial of "<< a << " is " << fact << endl;
    }
};
int main() {
    Factorial f;
    return 0;
}