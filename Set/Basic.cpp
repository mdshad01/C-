#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    
    cout<<s.size() << endl;
    for(auto val:s){ //auto = int
        cout<< val << " ";
    }
    cout<< endl;
    auto it = s.find(3);
    cout << *(s.lower_bound(4)) << endl; // should not be less than key
    cout << *(s.upper_bound(4)) << endl; // grater than key
    return 0;
}