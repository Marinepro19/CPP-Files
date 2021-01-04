#include <iostream>

int main(){
  int var = 5000000;
  std::cout << sizeof(bool) << std::endl;
  std::cout << sizeof(char) << std::endl;
  std::cout << sizeof(short) << std::endl;
  std::cout << sizeof(int) << std::endl;
  std::cout << sizeof(long) << std::endl;
  std::cout << sizeof(long long) << std::endl;
  std::cout << sizeof(float) << std::endl;
  std::cout << sizeof(double) << std::endl;
  std::cout << sizeof(long double) << std::endl;
  std::cout << sizeof(var) << std::endl;

  double myArray[10];
  std::cout << sizeof(myArray) << std::endl;

  int numbers[100];
  std::cout << sizeof(numbers) / sizeof(numbers[0]);
  return(0);
}
