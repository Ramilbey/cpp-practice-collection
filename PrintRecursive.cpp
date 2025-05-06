#include <iostream>
using namespace std;

void printNormal(int arr[], int n, int i = 0) {
    if (i == n)
        return;
    cout << arr[i] << " ";
    printNormal(arr, n, i + 1);
}

void printReverse(int arr[], int n, int i = 0) {
    if (i == n)
        return;
    printReverse(arr, n, i + 1);
    cout << arr[i] << " ";
}

int main() {
    int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};

    cout << "Normal order: ";
    printNormal(arr, n);

    cout << "\nReverse order: ";
    printReverse(arr, n);

    return 0;
}
