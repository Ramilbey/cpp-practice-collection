// Write a program to merge three (3) arrays (arr1, arr2 and arr3) into another array (arrayMerg).
// Note that, all arr1, arr2 and arr3 should be inserted in Ascending order.
// The merged array should also be in Ascending order.
// Note that, this task can be done without sorting.
#include <iostream>
using namespace std;

void arrayMergAcending(int arr1[], int arr2[], int arr3[], int size1, int size2, int size3, int merged[]){
  int i = 0;
  int j = 0;
  int k =0;
  int m = 0;
  while(i<size1  || j < size2 || k < size3){
    int minVlaue = 1000;
    if(i < size1 && arr1[i] < minValue) 
      minValue = arr1[i];
    if(j < size2 && arr2[j] < minValue) 
      minValue = arr2[j];
    if(k < size3 && arr3[k] < minValue)
      minValue = arr3[k];
  }
}
void loop(int merged[], int size1, int size2, int size3){
  for(int i = 0; i< size1+ size2 + size3; i++)
    cout<< merged[i];
}
int main(){
  int size1 = 3;
  int arr1[size1] = {1,2,3};
  int size2 = 3;
  int arr2[size2] = {4,5,6};
  int size3 = 3;
  int arr3[size3] ={7,8,9};
  int mergedArray[size1 + size2 + size3];
  arrayMergAcending(arr1, arr2, arr3, size1,size2, size3, mergedArray);
  loop(mergedArray, size1, size2, size3);
}
