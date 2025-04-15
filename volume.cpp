// calculating volume
#include <iostream>
using namespace std;
int main (){
  double pi = 3.141592653589793;
  double r;
  cout << "Enter the radius: ";
  cin >> r;
  double result = (4.0 /3.0) * pi *r *r*r;
  cout << result;
  return 0;
}
