// 1.Assume you have 10 students' IDs consisting of integer numbers. Apply the most suitable searching algorithms in terms of efficiency. Depending on the content of the array, choose either Sequential Search or Binary Search (recursive) algorithms:
// Generate a set of integers (user input) into the array in any order. All integers in the array must be unique. Ask the user to input an integer to be searched in the array.
// Implement both Sequential Search and Binary Search (recursive) and let the program choose the most suitable algorithm to be applied.
// Print the output if the integer exists and specify the location; otherwise, show that the integer does not exist.
#include <iostream>
using namespace std;

void insert(int n, int arr[]){
  cout<< "Enter the number of students ";
  cin>> n;
  cout<< "Enter students' IDS "<<endl;
  for( int i = 0; i < n; i++)
    cin >> arr[i];
}
int seqSearch(int n, int arr[], int i, int target){
  if(i >= target)
    return -1;
  if(arr[i] == target)
    return i;
   return seqSearch(n , arr,i+1, target);
}
int binarySearch(int arr[], int h, int l, int target){
  int mid =(l+h)/2;
  if(arr[mid] == target)
    return mid;
  if( arr[mid] < target)
    return binarySearch(arr, mid + 1, l, target);
  if(arr[mid] > target)
    return binarySearch(arr, l, mid -1, target);
  return -1;
}
bool isAscending(int n, int arr[]){
  for(int i=0; i < n -1; i++)
    if(arr[i]>arr[i+1])
      return false;
  return true;
}
int main(){
  int n = 100;
  int arr[n];
  insert(n, arr);
  int target; 
  cout<< "Enter the target ";
  cin >> target;
  if(isAscending(n, arr))
    cout << binarySearch(arr, 0, n, target);
  else 
    cout<< seqSearch(n, arr, 0, target); 
}
