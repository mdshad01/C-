#include<iostream>
#include<map>
using namespace std;
int main() {
    map<string, int> m;
    m["tv"] = 100;
    m.insert({"mobile",200});
    m.insert({"camera",50});
    m.insert({"tablet",40});

    for(auto val:m){ // auto = pair<string,int>
        cout<< val.first << " " << val.second << endl;
    }
    cout<< endl;
    return 0;
}