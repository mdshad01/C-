#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {10,20,30,40,50};

    cout<< "Begin " << *(vec.begin()) << endl;
    cout<< "End " << *(vec.end() - 1) << endl;

    // Iterator

    vector<int>::iterator it; //  =  auto
    for(it = vec.begin(); it != vec.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<< endl;

    // reverse iterator - rbegin() = end() - 1 and rend();
    vector<int>::reverse_iterator itr;
    for(itr = vec.rbegin(); itr != vec.rend(); itr++) {
          cout<< *(itr) << " ";
    }
    cout << endl;
    // we can write this in short like this
    // vector<int>:reverse_iterator = auto (C++ automaictally understand we usinf rbegin and rend so we backtrack the vector)

    for(auto it = vec.rbegin(); it != vec.rend(); it++) {
          cout<< *(it) << " ";
    }
    cout << "begin " << *(vec.rend() - 1) << endl; // ?
    
    // max_element(vec.begin(),vec.end()) -> return the Iterator maximum element in vector
    // mim_element(vec.begin(),vec.end()) -> return the Iterator minimum element in vector
    cout << *(max_element(vec.begin(), vec.end())) << endl;
    cout << *(min_element(vec.begin(), vec.end())) << endl;

    cout << binary_search(vec.begin(),vec.end(),30) << endl;

    int n = 15;
    cout << __builtin_popcount(n) << endl;
    return 0;
}