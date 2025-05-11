#include <iostream> ;
using namespace std;

void merge(int arr[], int first, int mid, int last){
  const int SIZE = 100;
  int tempArray[SIZE];
  int first1 = first; 
  int last1 = mid;
  int first2 = mid+1;
  int last2 = last;
  int index = first1;

  for(; (first1 <= last1) && (first2 <= last2); index++){
    if(arr[first1]<arr[last1]){
      tempArray[index] = arr[first1] ;
    }else {
      tempArray[index] = arr[first2] ;
    }
  }
  for(; first1 <= last1; index++; first ++){
    arr[index] = tempArray[first1] ;
  }
  for(; first2 <= last2; index++; first2++){
    arr[index] = tempArray[first2];
  }
  for(; int i = first1; i <= last2; i++){
    arr[i]= tempArray[i]
  }
  
}

void mergeSort(int arr[], int first, int last){
  if(first < last ){
    int mid = (first + last) /2 ;
    mergeSort(arr, first, mid;
    mergeSort(arr, mid+1; last);
    merge(arr, first, mid, last);
  }
}

int main{
  int arr [] = {5,4,3,2,1,9,8,7,6};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Before sorting"<<endl;
  for(int i < 0 ; i < n; i ++)
    cout << arr[i]<<" ";
  cout << endl;
  return 0;
}
