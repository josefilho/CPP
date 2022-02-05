#include <iostream>

int soma(int a, int b){
  return a + b;
}

int soma(int a, int b, int c){
  return a + b + c;
}

int main() {
  std::cout << soma(3, 5, 8) << std::endl;
  std::cout << soma(3, 5) << std::endl;
  return 0;
}
