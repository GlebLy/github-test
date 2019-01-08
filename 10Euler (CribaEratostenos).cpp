#include <iostream>
#include <cmath>
#include <vector>
#include "aux.h"

long int sumVector(std::vector<int> v) {
  long int sum = 0;
  if (v.size()==0) {
    std::cout << "NULL" << '\n';
  }else{
    int i = 0;
    while (i<v.size()) {
      sum += v[i];
      i++;
    }
  }
  return sum;
}

std::vector<int> erastotenovoSito(int predel){
  std::vector<int> v;
  if (predel<2) {
    return v;
  }else if (predel == 2) {
    v.push_back(predel);
    return (v);
  }else{
    int i = 1;
    v.push_back(2);
    while (i<predel) {
      if (i%2!=0) {
        v.push_back(i);
      }
      i++;
    }
    int j = 0;
    while (v[j] < sqrt(predel)) {
      int k = 0;
      while (k<v.size()) {
        if (v[k] % v[j] == 0 && !etoFactor(v[k])) {
          v.erase(v.begin()+k);
        }
        k++;
      }
        j++;
      }
    }
    return v;
  }

int main() {
  int predel;
  std::cout << "Ведите предел: " << '\n';
  std::cin >> predel;
  std::vector<int> v;
  v = erastotenovoSito(predel);
  std::cout << "Сумма факторов до "<< predel<< ": "<< sumVector(v) << '\n';
  return 0;
}
