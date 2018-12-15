#include <iostream>
#include "aux.h"

long int summaFak(int predel){
  int i = 0;
  long int sum = 0;
  while (i<predel) {
    if (etoFactor(i)) {
      sum+=i;
    }
    i++;
  }
  return sum;
}

int main() {
  int predel;
  std::cout << "Ведите предел: " << '\n';
  std::cin >> predel;
  std::cout << "Сумма факторов до "<< predel<< ": "<< summaFak(predel) << '\n';
  return 0;
}
