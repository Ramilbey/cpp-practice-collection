#include <iostream>
using namespace std;

void insert(int& size, int arr[]) {
    cout << "Enter how many elements you want to add? ";
    cin >> size;
    cout << "Enter the " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
}
void print(int size, int arr[]) {
    cout << "Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
bool isAscend(int size, int arr[]) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
void bubble(int size, int arr[]){
    for( int i = 0; i < size; i++)
        for(int j=0; j < size - i -1; j++)
            if( arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j+1] = temp;
            }
    cout << "After Bubble sort";
    print(size, arr);
}
int binary(int arr[], int size, int target){
    int l = 0;
    int h = size -1;

    while(l <=h){
        int mid = (l + h ) / 2;
        if(arr[mid] == target)
            return mid;
        else if(arr[mid] <target)
            l= mid + 1;
        else
            h = mid -1;
    }
    return -1;
}

int main() {
    int size = 100;
    int arr[size];
    int target;
    
    insert(size, arr);
    print(size, arr);
    while(!isAscend(size, arr)){
        cout<< "The elements you entered are not ascending order!"<<endl;
        cout << "Do you want to..."<< endl;
        cout << "1.Re-Enter the elements in Acsending order or"<< endl;
        cout << "2.Let program run the Bubble sort function"<< endl;
        cout << "Enter your choice 1/2"<<endl;
        
        int choice;
        cin >>choice;
        
        if(choice == 1){
            insert(size,arr);
            print(size, arr);
        }
        else if(choice ==2){
            bubble(size,arr);
            break;
        }
        else{
            cout<< "Invalid choice!";
            cout << "Please choose 1 or 2";
        }
    }
    
    cout << "Enter the target number to perform binary search: "; 
    cin >> target;
    
    int result = binary(arr, size, target);
    
    if(result != -1)
        cout<< "The target found at index " << result<< endl;
    else 
        cout<< "Average case"<< endl;
        
    if(result ==0|| result == size)
        cout<< "worst case";
    else if( result == size/2)
        cout << "Best case";
    else
        cout<< "Average case";
    return 0;
}
