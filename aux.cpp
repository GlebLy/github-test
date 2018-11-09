#include <iostream>
#include <vector>
#include <cmath>
void showVector(std::vector<long int> v) {
  /* code */
  if (v.size()==0) {
    std::cout << "NULL" << '\n';
  }else{
    std::cout << "Наш вектор:  " << '\n';
    int i = 1;
    std::cout << "["<< v[0]<< "]";
    while (i<v.size()) {
      std::cout << ", [" << v[i]<<" (" <<etoFactor(v[i]) << ")"<< "]";
      i++;
    }
    std::cout << '\n';
  }
}
std::vector<long int> vozmozhnieOsnFactora(std::vector<long int> &v, int chislo){
  if (v.size()==0) v.push_back(2);
  int i = 3;
  while (v.back()<sqrt(chislo) && i<chislo) {
    if (etoFactor(i)) {
      v.push_back(i);
      std::cout << "индикатор "<< i << " " <<etoFactor(i) << '\n';

    }
    i++;
  }
  if (etoFactor(chislo) && i<chislo) {
    v.push_back(chislo);
  }
  return v;
}

std::vector<long int> osnFactor(std::vector<long int> v, int chislo){
  int i = 0;
  std::vector<long int> vFactor;
  while (i<v.size()) {
    std::cout << "индикатор " << i << '\n';
    std::cout << "входит " << chislo%v[i] << '\n';
    if (chislo%v[i]==0) {
      vFactor.push_back(v[i]);
    }
    i++;
  }
  return vFactor;
}
