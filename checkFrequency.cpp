// 4.Write a C++ program to apply a recursive function to calculate the frequencies of all numbers in a one-dimensional array. Generate random numbers between 0 and 30 into an array size of 30. Provide the complexity of your code in terms of big Oh notation. 
// Steps:
// a.Assign random numbers to the array
// b.Calculate the frequency of all numbers in the array
// c.Store the frequencies of all numbers
// d.Sort the frequencies from smallest to largest.
// e.Display every number and its frequency.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateRandomNumber(int arr[], int n){
  for( int i = 0; i < n; i++){
    arr[n] = rand() % 31;
    cout<< arr[i]<< " ":
  }
}
void frequency(int arr[],int n int index, int freq[]){
  if(index == n)
    return;
  freq[arrp[index]]++;
  frequency(arr, n, index+1 , freq)
}

int main () {
  srand(time(0));
  int n = 30;
  int arr[n];
  int freq[n];
  generateRandomNumber(arr n);
  frequency(arr, n, 0, freq);

   for (int i = 0; i <= MAX; i++) {
        if (freq[i] > 0)
            cout << i << " occurred " << freq[i] << " times\n";
    }
  
}
