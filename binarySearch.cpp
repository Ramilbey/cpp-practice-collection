#include <iostream>
using namespace std;

void insert(int& size, int arr[]) {
    cout << "Enter how many elements you want to add? ";
    cin >> size;
    cout << "Enter the " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}
void print(int size, int arr[]) {
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void isAscend(int size, int arr[]) {
    bool isAsc = true;
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            isAsc = false;
            break;
        }
    }
    cout << "Is array in ascending order? ";
    if (isAsc)
        cout << "True" << endl;
    else
        cout << "False" << endl;
}
int binary(int arr[], int size, int target){
    int l = 0;
    int h = size -1;

    while(l <=h){
        int mid = (l + h ) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] <target)
            l= mid + 1;
        else
            h = mid -1;
    }
    return -1;
}

int main() {
    int size = 100;
    int arr[size];
    int target;
    
    insert(size, arr);
    print(size, arr);
    isAscend(size, arr);
    
    cout << "Enter the target number to perform binary search: "; 
    cin >> target;
    
    int result = binary(arr, size, target);
    
    if(result != -1)
        cout<< "The target found at index " << result<< endl;
    else 
        cout<< "Average case"<< endl;
        
    if(result ==0|| result == size)
        cout<< "worst case";
    else if( result == size/2)
        cout << "Best case";
    else
        cout<< "Average case";
    return 0;
}
