#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

void chooseRandomly(int arr[], int n){
    for(int i = 0; i < n; i ++){
        int index = rand() % 10;
        cout<<"choosen random numbers from array "<< arr[index] << " "<< endl;
    }
    
}

int main(){
    srand(time(0));
    int n = 10;
    int arr[n] = {0,1,2,3,4,5,6,7,8,9};
    chooseRandomly(arr, n);
}
