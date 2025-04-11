#include <iostream>
#include <cmath> // Needed for pow()
using namespace std;

void swap(int &f, int &h) {
    f = f + h;
    h = f - h;
    f = f - h;
}

double volume(int r) {
    double pi = 3.141; // or use M_PI from <cmath> for more accuracy
    double result = pow(r, 3); // r^3
    double v = (4.0 / 3.0) * pi * result;
    return v;
}

int main() {
    int a = 8;
    int b = 10;
    swap(a, b);
    cout << a << " " << b << endl;

    int r;
    cout << "Enter radius: ";
    cin >> r;

    double v = volume(r);
    cout << "Volume is " << v << endl;

    return 0;


    int sizeOne;
    cout << "Enter the size of first array: ";
    cin >> sizeOne;
    int sizeTwo; 
    cout << "Enter the size of the second array: ";
    cin >> sizeTwo;
    int sum;
    sum = sizeOne + sizeTwo;
    int arr1[sizeOne];
    cout << "Enter " << sizeOne << " elements in array one: "<<endl;
    for(int i =0; i<sizeOne; i++)
        cin >> arr1[i];
    int arr2[sizeTwo]; 
    cout << "Enter " << sizeTwo<< " elements in array two: "<< endl;
    for(int i= 0; i < sizeTwo; i++)
        cin >> arr2[i];
    int mergedArr[sum];
    
}

