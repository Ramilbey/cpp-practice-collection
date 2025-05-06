#include <iostream>
using namespace std;

int fib(int n){
    if(n <=1)
        return n;
    return fib(n -2) + fib(n -1) ;
}

int fibLoop(int n){
    int arr[n+1];
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    cout <<fib(40)<< " ";
    cout<< fibLoop(40);
    return 0;
}
