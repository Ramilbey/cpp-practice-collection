#include <iostream>
using namespace std; 

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j= i + 1; j< n; j++){
            if(arr[j]< arr[min]) min = j; 
        }
     swap (arr[i], arr[min]);
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
    selectionSort(arr, n);
    print(arr, n);
    return 0;
}
