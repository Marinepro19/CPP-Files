#include <iostream>
using namespace std;

int main() {
  short int age;
  int grade;
  cout << "Please enter your age." << endl;
  cin >> age;
  cout << "Please enter your Grade on the test." << endl;
  cin >> grade;

  if (age > 16 && age < 40 || grade > 80) {
    cout << "Accepted!" << endl;
  }
  else {
    cout << "Not acceptable!" << endl;
  }
  return(0);
}
