#include <iostream>
#include "aux.h"

long long factorN(int n){
  long long i = 0;
  int sum = 0;
  long long faktor = 0;
  while (sum<n) {
    if (etoFactor(i)) {
      faktor = i;
      //std::cout << sum << " ,";
      sum++;
    }
    i++;
  }
  return(faktor);
}

int main() {
  std::cout << "Ведите предел: " << '\n';
  int chislo;
  std::cin >> chislo;
  std::cout << "Ответ "<< factorN(chislo) << '\n';
  return 0;
}
