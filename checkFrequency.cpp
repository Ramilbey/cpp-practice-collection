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
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 31;
        cout << arr[i] << " ";
    }
    cout << endl;
}

void frequency(int arr[], int n, int index, int freq[]) {
    if (index == n)
        return;
    freq[arr[index]]++;
    frequency(arr, n, index + 1, freq);
}

void selectionSort(int freq[], int num[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (freq[j] < freq[min])
                min = j;
        }
        swap(freq[i], freq[min]);
        swap(num[i], num[min]);
    }
}

int main() {
    srand(time(0));
    const int size = 30;
    const int range = 31; // numbers from 0 to 30

    int arr[size];
    int freq[range] = {0};
    int num[range];

    for (int i = 0; i < range; i++) {
        num[i] = i;
    }

    generateRandomNumber(arr, size);
    frequency(arr, size, 0, freq);
    selectionSort(freq, num, range);

    for (int i = 0; i < range; i++) {
        if (freq[i] > 0)
            cout << num[i] << " occurred " << freq[i] << " times\n";
    }

    return 0;
}
