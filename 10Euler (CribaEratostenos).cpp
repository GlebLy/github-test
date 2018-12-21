#include <iostream>
#include <cmath>
#include <vector>
#include "aux.h"

std::vector<int> ubratDelimyeNa(int vi, int j, std::vector<int> v){
  int i = j;
  while (i!=v.end()) {
    if (v[i]%vi==0) {
      v.erase(v.begin + i);
    }
    i++;
  }
  return v;
}

std::vector<int> euclidovoSito(int predel){
  std::vector<int> v;
  if (predel<2) {
    return NULL;
  }else if (predel == 2) {
    return v.push_back(predel);
  }else{
    int i = 1;
    while (i<predel) {
      if (i%2==0) {
        v.push_back(i);
      }
      i++;
    }
    while (v[i] < sqrt(predel)) {
      if (etoFactor(v[i])) {
        ubratDelimyeNa(v[i], i, v);
      }
    }
  }
}


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
