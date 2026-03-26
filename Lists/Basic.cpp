#include <iostream>
#include <list>
using namespace std;

// Lists in C++
// List is a Double linked list , random access not possible

int main() {
    list<int> l;
    list<int> l2 = {1,2,3,4,5,6};
    // push_back() -> push element at the of the list
    // push_front() -> push lement in front of the list
    // emplace_back() -> same as push_back
    // emplace_front() -> same as push_front
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);

    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;

    // pop_back() => use to remove element from end of the list
    // pop_front() -> use to remove element from front of the list

    l.pop_back();
    l.pop_front();
    for(int val : l) {
        cout << val << " ";
    }
    cout << endl;
    for(int val : l2) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}