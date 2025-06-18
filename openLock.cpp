#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 5;
const int VALUE_COUNT = 10;

int values[VALUE_COUNT] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
int lock[SIZE];    
int guess[SIZE];    
int totalTries = 0;

void generateLock() {
    for (int i = 0; i < SIZE; i++) {
        int randomIndex = rand() % VALUE_COUNT;
        lock[i] = values[randomIndex];
    }

    cout << "Lock: ";
    for (int i = 0; i < SIZE; i++) cout << lock[i];
    cout << endl;
}

bool isCorrect() {
    for (int i = 0; i < SIZE; i++) {
        if (guess[i] != lock[i]) return false;
    }
    return true;
}

bool backtrack(int pos) {
    if (pos == SIZE) {
        totalTries++;
        if (isCorrect()) return true;
        return false;
    }

    for (int i = 0; i < VALUE_COUNT; i++) {
        guess[pos] = values[i];
        if (backtrack(pos + 1)) return true;  
    }

    return false;
}

int main() {
    srand(time(0));

    generateLock();

    if (backtrack(0)) {
        cout << "Lock cracked after " << totalTries << " attempts!" << endl;
        cout << "Combination: ";
        for (int i = 0; i < SIZE; i++) cout << guess[i];
        cout << endl;
    } else {
        cout << "Could not crack the lock." << endl;
    }
    cout << "Randomly assigned combinations of lock: ";
    for(int i =0 ; i< SIZE; i++)
         cout << lock[i];

    return 0;
}
