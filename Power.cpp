#include <iostream>
using namespace std;

int power( int n, int m){
    if(m == 0)
        return 1;
    return n *power(n, m-1);
}
int main() {
    cout<< power(2,5);

    return 0;
}
