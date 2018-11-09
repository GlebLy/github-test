#include <iostream>
#include <cmath>

bool etoFactor(long long chislo){
  if (chislo<2) {
    return false;
  }else{
    int i = 2;
    while (i<chislo) {
      if (chislo%i==0) {
        return false;
      }
      i++;
    }
    return true;
  }
}

long long welikijFaktor(long long chislo){
  long long i = 1;
  long long faktor = 0;
  while (i<sqrt(chislo)) {
    if (chislo%i==0 && etoFactor(i)) {
      faktor = i;
      std::cout << "["<<i<<"]";
    }
    i++;
  }
  std::cout  << '\n';
  return faktor;
}

int main() {
  long long chislo;
  std::cout << "Ведите число " << '\n';
  std::cin >> chislo;
  std::cout << "Ответ " <<welikijFaktor(chislo)<< '\n';
  return 0;
}
