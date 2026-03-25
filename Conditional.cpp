#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    if(ch >= 65 && ch <= 96) {
        cout << "Charcter is Uppercase" << endl;
    }else if (ch >= 97 && ch <= 122 ) {
        cout << "Character is lowercase" << endl;
    } else {
        cout << "Invalid character" <<  endl;
    }
    return 0;
}