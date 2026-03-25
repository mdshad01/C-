#include <iostream>
#include <climits>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) return i;
    }
    return -1;
}

// M1
void reverseArray(int arr[], int size) {
    for(int i = 0; i < size/2; i++) {
        // int temp = arr[i];
        // arr[i] = arr[size-i-1];
        // arr[size-i-1] = temp;
        swap(arr[i],arr[size-i-1]);
    }
}
// M2
void reverseArray2(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start <  end) {
        swap(arr[start],arr[size-end]);
        start++;
        end--;
    }
}

int main() {
    int nums[] = {24, 45, 34, 76, 87,  11};
    int small = INT_MAX, large = INT_MIN;
    int li = 0, si = 0;
    int size = sizeof(nums)/sizeof(nums[0]);
    for(int i = 0; i < size; i++) {
        if(nums[i] > large){
            large = nums[i];
            li = i;
        } 
        // large = max(nums[i],large);
        if(nums[i] < small) {
            small = nums[i];
            si = i;
        } 
        // small = min(nums[i],small);
    }
    // cout << "Smallest element is " << small << " and largest element is " << large << endl;
    // cout << "Smallest element index is " << si << " and largest element index is " << li << endl;
    int arr[] = {4,2,7,8,1,2,5};
    int size2 = sizeof(arr)/sizeof(arr[0]);
    // cout << "Index  = " << linearSearch(arr,7,8);
    
    reverseArray2(arr,size2);

    for(int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}