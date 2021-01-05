#include <iostream>

int addNumbers(int x, int y){
  int result = x + y;
  return result;
}

int main(){
  int range = 0;
  int time = 0;
  while(time < 10){
    range++;
    time++;
    const int num = addNumbers(rand() % range + range, rand() % range + range);
    std::cout << num << std::endl;
  }
}
