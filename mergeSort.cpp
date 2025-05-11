#include <iostream> ;
using napespace std;

void mergeSort(int arr[], int first, int mid, int last){
  int tempArray[];
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
}

int main{
  
}
