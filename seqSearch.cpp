//sequential search
#include <iostream>
using namespace std;
int seqSearch(int arr[], int n, int item){
    for(int i = 0 ; i < n; i ++)
        if(arr[i] == item)
            return i; // returns the found item and terminates ( stops the loop)
    return -1;
}
int main (){ 
    int n = 20;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};
    int item =10;//worst case
    int index = seqSearch(arr,n, item);
    if(index == -1)
        cout << "Item not found"<<endl;
    else if(index ==0) 
        cout <<"Best case"<<endl;
    else if (index ==n-1)
        cout <<"Worst case";
    else
        cout <<"Average case";
    cout <<index; //we can cout here no need in function cout
}
