#include <iostream>
using namespace std; 

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n -i -1; j++){
            if(arr[j] > arr[j+1]){
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] -arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
}

void print( int a[], int n){
    for( int i =0; i < n; i++)
        cout<< a[i] << " ";
    cout << endl;
}

int main() {
    int n = 9;
    int arr[n] = {5,3,2,1,6,7,8,9,4};
    print(arr, n);
    bubbleSort(arr, n);
    print(arr, n);
    return 0;
}
