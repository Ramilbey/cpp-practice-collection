//binary search
#include <iostream>
using namespace std; 
int main(){
  int size = 8;
  int arr[size] = {8,4,5,6,2,1,3,7};
  for(int i = 0; i< size; i++)
    cout<< arr[i] << " " ;
  cout << endl;
  bool isAcending = false;
  for(int i = 0; i < size -1; i++)//lcheck if it is acending
    if(arr[i] > arr[i+1])
      isAcending = true;
  if(isAcending)
    cout<< "True";
  else
    cout << "False";
}
