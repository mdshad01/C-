#include<iostream>
#include<algorithm> //sort
#include<vector>
using namespace std;

// custommm comparators for sorting pair<int, int>
bool comparator(pair<int,int> p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second)return false;
    if(p1.first < p2.first) return true;
    if(p1.first > p2.first) return false;
    return false;
}

int main() {
    int arr[] = {2,8,1,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n); //sort(first included, last excluded)

    vector<int> vec = {8, 3, 6, 1, 7};
    // sort(vec.begin(),vec.end());
    sort(vec.begin(),vec.end(), greater<int>()); // greater<int>() ia a comparator that describe the comparision in this case grater means grater element first

    vector<pair<int,int>> p = {{3,1},{5,7},{1,2},{8,9}};
    sort(p.begin(),p.end(),comparator);
    for(auto val:p){
        cout<<val.first << " " << val.second << endl;
    }
    return 0;
}