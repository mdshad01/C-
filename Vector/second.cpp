#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {10,20,30,40,50};

    cout<< "Begin " << *(vec.begin()) << endl;
    cout<< "End " << *(vec.end() - 1) << endl;

    // Iterator

    vector<int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++) {
        cout<< *(it) << " ";
    }
    cout<< endl;
    return 0;
}