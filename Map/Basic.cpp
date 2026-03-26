#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

// Map -> all the insert, erase, count takes TC = O(log n)
// unordered_map -> all operation take place in TC = O(1)

int main() {
    map<string, int> m;
    m["tv"] = 100;
    m.insert({"mobile",200});
    m.insert({"camera",50});
    m.insert({"tablet",40});

    for(auto val:m){ // auto = pair<string,int>
        cout<< val.first << " " << val.second << endl;
    }
    cout<< "count = " << m["tablet"] <<  endl;
    cout<< "count = " << m.count("tablet") <<  endl;
    cout<< endl;

    if(m.find("tv") != m.end()){
        cout<<"fount\n";
    } else {
        cout<<"not found\n";
    }
    auto it = m.find("tablet"); // find() return iterator
    if(it != m.end()) {
         cout << it->second  << endl;
    }
    
    // Multi map -> it can store multiple 

    multimap<string, int> mm;
    mm.emplace("tv",200);
    mm.insert({"tv",100});
    mm.emplace("tv",300);
    mm.emplace("tv",400);

    mm.erase(mm.find("tv"));
    // for(auto p:mm){
    //     cout<<p.first << " " << p.second << endl;
    // }

    // Unordered map

    unordered_map<string,int> map;
    map.emplace("tv",200);
    map.insert({"tv",100});
    map.emplace("tv",300);
    map.emplace("tv",400);

     for(auto p:map){
        cout<<p.first << " " << p.second << endl;
    }

    return 0;
}