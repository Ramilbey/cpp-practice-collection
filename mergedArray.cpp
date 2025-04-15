//merging two arrays with each other
#include <iostream>
using namespace std;
void merging(int arr1[], int arr2[], int size1, int size2, int merged[]){
    for(int i = 0; i< size1; i++)
        merged[i] = arr1[i];
    for(int i = 0; i < size2; i++)
        merged[size1 + i] = arr2[i];
}
int main (){ 
    int size1 = 8;
    int size2 = 3;
    int arr1[size1] = {1,2,3,4,5,6,7,8};
    int arr2[size2] = {9,10,11};
    int merged[size1 + size2];
    merging(arr1, arr2, size1, size2, merged);
    for (int i = 0; i < size1 + size2; i++)
        cout << merged[i] << " ";
    return 0;
}
