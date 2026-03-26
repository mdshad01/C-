#include <iostream>
#include <deque>
using namespace std;

// Deque -> Double ended queue, it is a dynamic arrays, which allow random access
// all function same as list

int main() {
    deque<int> d = {1,2,3,4,5};

    d.push_front(9);
    d.pop_back();

    cout<< d[2] << endl;

    for(int val: d){
        cout << val << " ";
    }
    cout<< endl;
    return 0;
}