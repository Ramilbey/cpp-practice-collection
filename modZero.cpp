#include <iostream>
using namespace std;

int mod(int num, int counter){
    
    if(num <10)
        return counter;
    if(num  % 10 == 0)
        ++counter;
    return mod(num/10, counter);
}

int main() {
    cout << mod(100200, 0);

    return 0;
}
