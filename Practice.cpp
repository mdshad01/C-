#include <iostream> //preprocessor director
using namespace std;

int main(){
    // cout << "MD" << endl << "Shad" << endl << "Alam" << endl;
    int age  = 24;
    char grade = 'O';
    float pi = 3.14f;
    bool isSafe = false;
    cout << "Age : " << age << endl;
    cout << "Grade : " << grade << endl;
    cout << "PI = " << pi << endl;
    cout << "isSafe = " <<isSafe << endl; // For true -> 1 it print 1 and for false -> 0
    // Type casting
    double a = 100.99;
    cout << "Value : " << a << endl;
    int b = (int)a;
    cout << "Value : " << b << endl;

    return 0;
}