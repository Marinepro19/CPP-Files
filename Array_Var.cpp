#include <iostream>
using namespace std;

int main() {
  int Grades[6] = {98, 100, 93, 89, 97, 95};
  int History = Grades[0];
  int Chemistry = Grades[1];
  int Precalculus = Grades[2];
  int Engineering = Grades[3];
  int English = Grades[4];
  int Gaming = Grades[5];
  int x;

  cout << "Please enter your password, Mr. Obregon." << endl;
  cin >> x;
  cout << " " << endl;
  if (x == 072005); {
  cout << "History" << endl;
  cout << History << endl;
  cout << "Chemistry" << endl;
  cout << Chemistry << endl;
  cout << "Precalculus" << endl;
  cout << Precalculus << endl;
  cout << "Engineering" << endl;
  cout << Engineering << endl;
  cout << "English" << endl;
  cout << English << endl;
  cout << "Gaming" << endl;
  cout << Gaming << endl;
  }
  cout << " " << endl;
  cout << "Have a great day, Mr. Obregon." << endl;
  return(0);
}
