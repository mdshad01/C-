#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> nums, int key){
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == key) return i;
    }
    return -1;
}

void reverseVector(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n/2; i++) {
        swap(nums[i],nums[n-i-1]);
    }
}

// 2 pointer approch
void reverseVector2(vector<int>& nums){
    int left = 0;
    int right = nums.size() - 1;
    while(left < right) {
        swap(nums[left], nums[right]);
        left++;
        right--;
    }
}

int main() {
    vector<int> vec;

    vector<int> nums = {11,22,33,44};

    vector<int> numbers (3,0); //(size of vector, initialize every index with zero)

    vector<int> v2 (nums); //we can initialize a vector using old vector

    // for(int i = 0; i < nums.size(); i++) {
    //     cout<< nums[i] << endl;
    // }
    for(int i = 0; i < numbers.size(); i++) {
        cout<< numbers[i] << endl;
    }
    // for each loop mostly used with vector
    for(int i : nums){
        cout<< i << endl;
    }

    // Functions of vector
    cout << "Size of vector = " << numbers.size() << endl;

    // push_back() -> this function is use to push element at the end of vector or adding element

    cout << "Size of vector = " << vec.size() << endl;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout << "Size of vector = " << vec.size() << endl;
    // cout << vec[0] << endl;
    for(int val: vec){
        cout << val << endl;
    }

    // pop_back() -> this function is use to remove element from the end of the vector or delete value

    cout << "Size of vector = " << vec.size() << endl;
    vec.pop_back();
    vec.pop_back();
    cout << "Size of vector = " << vec.size() << endl;
    for(int i: vec){
        cout << i <<  endl;
    }

    // front() -> this is use to return the first index(i = 0) value of vector

    cout << vec.front() << endl; 

    // back() ->  return the last(i = n-1) index value

    cout<< vec.back() << endl;

    // at() -> get index value, similar to vec[i] = vec.at(i)
    
    cout << "Value = " << vec.at(1) << endl;

    // capacity() -> use to print capacity of vectot
    // Note: capacity != size , size = no of elemnt and capacity means how much element it can store

    cout<< "Size = " << vec.size() << endl;
    cout<< "Capacity = " << vec.capacity() << endl;

    int key = 33;
    cout << key << " found at index " << linearSearch(nums,key) << endl;

    for(int i : nums) {
        cout << i << endl;
    }
    reverseVector2(nums);

    for(int i: nums) {
        cout << i << endl;
    }
    vector<int> v = {0,1,2,4};
    int ans =  v.size();
    int j = 1;
    for(int i = 0; i < v.size(); i++) {
        ans ^= i;
        ans ^= v[i];
        // j++;
    }
    cout << "Missing no = " << ans << endl;

    // emplace_back() -> similar to push_back()

    vec.emplace_back(60);
    for(int i: vec) {
        cout << i << " ";
    }
    cout << endl;

    // erase -> TC = O(n) use to remove element from taking index value

    // vec.erase(vec.begin()+ 1);
    vec.erase(vec.begin()+ 1,vec.begin() + 3); // here [first include, last execluded)
      for(int i: vec) {
        cout << i << " ";
    }

    cout << endl;

    // insert(vec.begin() + position, number) -> TC = O(n) use to insert element at specific position 

    vec.insert(vec.begin() + 1,300);
     for(int i: vec) {
        cout << i << " ";
    }

    // clear() -> use to delete all the elements in a vector
    
    // vec.clear();

    // empty() -> use to check the vector is empth or not

    cout << "is empty " << vec.empty() << endl;

    // Iterators
    // begin() -> it point the starting position of the vector

    cout << "Begin " << *(vec.begin()) << endl;

    // end() -> it point at the end send garbeg value if vec has 5 elemnt it point the 6 index 
    cout << "End " << *(vec.end()) << endl;

    return 0;
}