#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex subtractComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

void displayComplex(Complex c) {
    cout << c.real;
    if (c.imag >= 0) cout << " + " << c.imag << "i";
    else cout << " - " << -c.imag << "i";
    cout << endl;
}

int main() {
    Complex num1, num2, sum, difference;
    
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> num1.real >> num1.imag;
    
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> num2.real >> num2.imag;
    
    sum = addComplex(num1, num2);
    difference = subtractComplex(num1, num2);
    
    cout << "Sum: ";
    displayComplex(sum);
    
    cout << "Difference: ";
    displayComplex(difference);
    
    return 0;
}
