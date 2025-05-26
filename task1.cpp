// 1.Assume you have 10 students' IDs consisting of integer numbers. Apply the most suitable searching algorithms in terms of efficiency. Depending on the content of the array, choose either Sequential Search or Binary Search (recursive) algorithms:
// Generate a set of integers (user input) into the array in any order. All integers in the array must be unique. Ask the user to input an integer to be searched in the array.
// Implement both Sequential Search and Binary Search (recursive) and let the program choose the most suitable algorithm to be applied.
// Print the output if the integer exists and specify the location; otherwise, show that the integer does not exist.
#include <iostream>;
using namespace std;

void inser(int n, int arr[]){
  cout<< "Enter the number of students";
  cin>> n;
  cout<< "Enter students' IDS"<<endl;
  for( int i = 0; i < n; i++)
    cin >> arr[i];
}
void seqSearch(int n, int arr[]), int target{
  for(int i=0; i < n; i++)
    if(arr[i] === target)
      return arr[i];
  return -1;
}
void binarySearch(int arr[], int h, int l, int target){
  int mid (l+h) /2;
  if(arr[mid] === target)
    return arr[mid];
  if( arr[mid] < target)
    return binarySearch(int arr[], int l, mid + 1, int target)
  if(arr[mid] > target)
    return binarySearch(int arr[], mid -1, int h, int target)
  return -1;
}





int main(){
  int n = 100;
  int arr[n];
  insert(n, arr);
  int target; 
  cout<< "Enter the target";
  cin >> target;
  

  
}
