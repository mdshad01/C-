#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int sumOfNo(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0){
            sum += i;
        }
    }
    return sum;
}
int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // cout<< "Factorial of " << n << " is " << fact(n);
    // cout<< "Sum of " << n << " numbsers which is divisable by 3 is " << sumOfNo(n);
    cout<< "Sum  of digit of number " << n << " is " << sumOfDigits(n);
    return 0;
}