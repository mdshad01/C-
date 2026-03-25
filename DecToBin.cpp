#include <iostream>
#include <math.h>
using namespace std;

int decToBin(int n){
    int decimalNo = n;
    int ans = 0, pow = 1;
    while(decimalNo > 0) {
        int rem = decimalNo % 2;
        decimalNo /= 2;
        ans += (rem* pow);
        pow *= 10;
    }
    return ans;
}
int binToDec(int n) {
    int binaryNo = n;
    int ans = 0, i = 0;
    while(binaryNo > 0){
        int rem = binaryNo % 10;
        binaryNo /= 10;
        ans +=(rem * powf(2,i));
        i++;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    // for(int i = 1; i <= n; i++) {
    //     cout << "Binary of "<< i <<" is " << decToBin(i) << endl; 
    // }
    // cout << "Power = " << powf(2,5);
    cout << "Decimal of "<< n <<" is " << binToDec(n) << endl; 
    return 0;
}