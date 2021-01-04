#include <iostream>
using namespace std;

int main() {
  int x = 3;
  int y;
  cout << "Enter a number greater then 3" << endl;
  cin >> y;
  if (y > x){
    cout << "Thank you! :)" << endl;
  }
  else {
    cout << "Are you bad at following directions?" << endl;
  }
  return(0);
}
