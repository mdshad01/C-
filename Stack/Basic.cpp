#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    // s.pop();
    // cout<< s.top() << endl;
    cout<< "Size of s is " << s.size() << endl;
    
    stack<int> s2;
    s2.swap(s);
    cout<< "Size of s is " << s.size() << endl;
    cout<< "Size of s2 is " << s2.size() << endl;

//    while(!s.empty()){
//     cout<< s.top() << " ";
//     s.pop();
//    }
   cout << endl;
    return 0;
}