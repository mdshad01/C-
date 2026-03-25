#include<iostream>
using namespace std;

int main() {
    int a[5],max = 0;
    cout<<"Enter 5 numbers: ";
    for(int i= 1; i <= 5; i++) {
        cin>>a[i];
    }

    for(int i = 1; i<= 5; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    cout<<"Maximum number is : " << max << endl;
    return 0;
}