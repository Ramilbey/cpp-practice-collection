//choose a pivot element
//elements smaller than pivot go to left
// elements bigger than pivot go to right
//recorsively sort left and right parts
#inlcude <iostream> 
using namespace std;
//Patrition array
int patrition(int arr[], int first, int last){
  int pivot = arr[first];//choose the first element of the pivot 

  // Initially, everything except the pivot is in the unknown region
  int lastS1 = first; // index of last item is S1 (less than pivot)
  int firstUnknown = first+1; // index of first item in unknown region

   // Move items from unknown to proper region one by one
  for(; firstUnknown <= last; ++firstUnknown){
      // Invariant:
      // theArray[first+1..lastS1] < pivot
      // theArray[lastS1+1..firstUnknown-1] >= pivot
    if(arr[firstUnknown] < pivot){
      // belongs to S1
      ++last1;
      swap(arr[firstUnkown], arr[lastS1]
    }// else it stays in S2 (greater than or equal to pivot)
  }
     // Put pivot in its proper position (between S1 and S2)
   swap(theArray[first], theArray[lastS1]);

   return lastS1; // Return index of the pivot
}
void quickSort(int arr[], int first, int last){
  int pivotIndex = patrition(arr, first, last);
  quickSort(arr, first, patrition-1, last);
  quickSort(arr, patrition+1, last);
}

void printArray(int arr[], int n){
  for(int i =0; i <n, i++)
    cout<< arr[i]<< " ";
  cout << endl;
}

int main (){
  
}
