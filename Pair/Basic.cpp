#include <iostream>
#include <vector>
using namespace std;

int main() {
    pair<string, int> p = {"Shad",5000000};
    pair<int,pair<char,int>> p2 = {1,{'a',10}}; // pair of pair

    cout << p.first << endl;
    cout << p.second << endl;
    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    // vector of pair

    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5}); // insert directly we have to create pair
    vec.emplace_back(5,6); //in-place objects create means we just send value it automatically create pair

    for(auto p: vec){ // pair<int,int> = auto
        cout << p.first << " " << p.second << endl;
    }
    
    return 0;
}