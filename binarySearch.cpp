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

int main() {
    const int MAX = 100;
    int arr[MAX];
    int size;

    insert(size, arr);
    print(size, arr);
    isAscend(size, arr);

    return 0;
}
