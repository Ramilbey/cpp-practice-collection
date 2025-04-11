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
}
