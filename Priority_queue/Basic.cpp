#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int> pq;
    priority_queue<int, vector<int>,greater<int>> p; // here grater<int> is a functor(function object) it like comparitor
    pq.push(3); //TC = O(log n)
    pq.push(7);
    pq.push(5);
    pq.push(20);
    p.push(3);
    p.push(7);
    p.push(5);
    p.push(20);
    while(!pq.empty()) {
        cout<< pq.top() << " ";
        pq.pop(); //TC = O(log n)
    }
    cout << endl;
    while(!p.empty()) {
        cout<< p.top() << " ";
        p.pop();
    }
    cout << endl;
    return 0;
}