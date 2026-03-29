#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5,10,9,8,7,6};
    reverse(vec.begin()+5,vec.end());
    for(int val:vec){
        cout<< val << " ";
    }
    cout << endl;

    string next = "bca";
    next_permutation(next.begin(),next.end());
    cout << next << endl;
    prev_permutation(next.begin(),next.end());
    cout << next << endl;
    
    return 0;
}