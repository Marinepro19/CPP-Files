#include <iostream>
using namespace std;

int main() {
  int myArray[10];
  for (int x = 0; x < 10; x++) {
    myArray[x] = 42;
    cout << x << ": " <<  myArray[x] << endl;
  }
  return(0);
}
