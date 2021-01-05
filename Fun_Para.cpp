#include <iostream>

int printSomething(int x){
  return x*2;
}
int main(){
 std::cout << printSomething(42) << std::endl;
 std::cout << printSomething(38) << std::endl;
 std::cout << printSomething(10) << std::endl;
  return(0);
}
