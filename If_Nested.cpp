#include <iostream>
using namespace std;

int main() {
  int score;
  cout << "Please enter the score on your exam." << endl;
  cin >> score;
  if (score >= 60) {
    cout << "Conratulations, you pass!" << endl;
    if (score == 100) {
      cout << "You got a perfect score!" << endl;
    }
  }
  else {
    cout << "You failed! :(" << endl;
  }
  return(0);
}
