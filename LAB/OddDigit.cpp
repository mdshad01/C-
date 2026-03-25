#include<iostream>
using namespace std;

int countOddDigit(int n) {
    int count = 0;
    while(n != 0) {
        int digit = n % 10;
        if(digit % 2 != 0) {
            count++;
        }
        n = n /10;
    }
    return count;
}

int main() {
    int n = 14789;
    cout<<"Number of odd digits in "<<n<<" is "<<countOddDigit(n)<<endl;
    return 0;
}