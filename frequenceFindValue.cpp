
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 
void frequency(int arr[], int n, int number){
    int counter=0;
    for(int i = 0; i<n; i++){
        if(arr[i] == number)
            counter++;
    }
    cout<< "number appeared "<< counter;
}
int findValue(int arr[], int index, int n, int val){
    if(index>=n)
        return -1;
    if(arr[index] == val)
        return index;
    return findValue(arr,index+1, n, val);
}

int main() {
    int n = 10;
    int arr[n]; 
    srand(time(0));
    
    for(int i = 0; i < n; i++){
        arr[i] = rand()%11;
        cout<< arr[i]<< " ";
    }
    cout << endl;
    
    frequency(arr, n, 3);
    cout <<endl;
    int index =findValue(arr, 0, n, 3);
    if(index ==-1)
        cout<< "value not found";
    else
        cout<< "value found at index "<<index;
    
    return 0;
}
