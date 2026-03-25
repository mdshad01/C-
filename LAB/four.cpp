#include <iostream>
using namespace std;

class A;
class B;
class C;

class A {
private:
    int num1;

public:
    A(int n) { num1 = n; }
    friend int findMax(A, B, C); // Friend function declaration
};

class B {
private:
    int num2;

public:
    B(int n) { num2 = n; }
    friend int findMax(A, B, C);
};

class C {
private:
    int num3;

public:
    C(int n) { num3 = n; }
    friend int findMax(A, B, C);
};

// Friend function definition
int findMax(A c1, B c2, C c3) {
    return max(c1.num1, max(c2.num2, c3.num3));
}

int main() {
    int a, b, c;
    
    // Accepting three numbers from the user
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Creating objects
    A obj1(a);
    B obj2(b);
    C obj3(c);

    // Finding and displaying the maximum number
    cout << "Maximum number is: " << findMax(obj1, obj2, obj3) << endl;

    return 0;
}
