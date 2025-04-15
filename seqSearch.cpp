//sequential search
#include <iostream>
using namespace std;
int seqSearch(int arr[], int n, int item){
    for(int i = 0 ; i < n; i ++)
        if(arr[i] == item)
            cout<< arr[i];
    return -1;
}
int main (){ 
    int n = 20;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int item =10;
    seqSearch(arr,n, item);
}
