#include <iostream>

int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}
int main(){
  std::cout << factorial(5) << "\n";
  return(0);
}
