#include <iostream>
using namespace std;

int main() {
  int age;
  cin >> age;
  switch (age) {
    case 16:
      cout << "Too young";
  break;
    case 42:
      cout << "Adult";
  break;
    case 70:
      cout << "Senior";
  break;
  default:
    cout << "No accecptable age detected" << endl;
  }
  return(0);
}
