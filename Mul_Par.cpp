#include <iostream>
#include <cstdlib>
#include <ctime>

int addNumbers(int x, int y){
  int result = x + y;
  return result;
}

int main(){
  srand(time(0));
  int range = 0;
  int time = 0;
  while(time < 30){
    range++;
    time++;
    const int num = addNumbers(rand() % range + range, rand() % range + range);
    std::cout << num << std::endl;
  }
}
