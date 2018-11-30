#include <iostream>
#include <vector>
//#include "aux.h"

bool isPrime(int chislo){
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

void showVector(std::vector<int> v) {
  if (v.size()==0) {
    std::cout << "NULL" << '\n';
  }else{
    std::cout << "Наш вектор:  " << '\n';
    int i = 1;
    std::cout << "["<< v[0]<< "]";
    while (i<v.size()) {
      std::cout << ", [" << v[i]<< "]";
      i++;
    }
    std::cout << '\n';
  }
}

std::vector<int> listPrime(int chislo){
  std::vector<int> v;
  int i = 2;
  while (i<=chislo) {
    if (isPrime(i)) {
        v.push_back(i);
        //showVector(v);
    }else{
      int k = i;
      int j = 0;
      while (j<v.size()) {
        //std::cout << "k делит j? : "<< "k="<<k<<",v[j]="<<v[j] /*<< " Ответ "<< k%v[j]==0*/<< '\n';
        int vj = v[j];
        //std::cout << "k%vj="<< k/vj << '\n';
        if (k%vj==0) {
          k = k/vj;
        }
        j++;
      }
      if (k!=1) {
        v.push_back(k);
        //showVector(v);
        }
    }
    i++;
    //std::cout << "i="<<i << '\n';
  }
  return v;
}

int umnozhVector(std::vector<int> v) {
  if (v.size()==0) {
    return 0;
  }else{
    int i = 1;
    int produkt = v[0];
    while (i<v.size()) {
      produkt*=v[i];
      i++;
    }
    return produkt;
  }
}

int main() {
  int chislo;
  std::cout << "Ведите число до которого : " << '\n';
  std::cin >> chislo;
  //std::cout << "Наш вектор:"<<  '\n';
  std::vector<int> v = listPrime(chislo);
  showVector(v);
  std::cout << "Ответ: "<< umnozhVector(v) << '\n';
  return 0;
}
