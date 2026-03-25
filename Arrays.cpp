#include <iostream>
using namespace std;

int main(){
    // int marks[] = {10,22,33,44,55};
    int size = 5;
    int marks[size];

    // Input elements of arrays
    for(int i = 0; i < size; i++) {
        cin >> marks[i];
    }

    for(int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }
    return 0;
}