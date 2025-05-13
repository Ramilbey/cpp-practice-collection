#include <iostream>
using namespace std;

int binarySearch(int arr[], int f, int l, int target) {
    int mid = (f+l)/2;
    if(arr[mid] == target)
        return mid;
    if(arr[mid] >target)
        return binarySearch(arr, f , mid-1, target);
    if(arr[mid] < target)
        return binarySearch(arr, mid+1, l, target);
    return -1;
}

int main() {
    int n =8;
    int arr[]= {10,20,30,40,50,60,70,80};
    
    cout<< binarySearch(arr, 0, n-1, 30);

    return 0;
}
