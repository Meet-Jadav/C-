#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int binary_search(vector<int>& arr, int a) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == a) {
            return mid;
        } else if (arr[mid] < a) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

int main(){
    vector<int> arr = {12, 11, 13, 5, 6, 7};
    sort(arr.begin(), arr.end());
    int a;
    cout<<"Enter the element to be searched: ";
    cin>>a;
    int index = binary_search(arr, a);
    if (index == -1) {
        cout << "Element not found" << endl;
        return 0;
    }
    cout<<"The" <<a<<" is found at index "<<index<<endl;
    return 0;
}