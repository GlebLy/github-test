#include <iostream>
#include <vector>
//#include <math>

bool etoFactor(int chislo){
  int i = 0;
  bool otwet = 0;
  while (i<chislo) {
    if (chislo%i!=0) {
      otwet = i;
    }
    i++;
  }
  return otwet;
}

std::vector<int> osnFactor(std::vector<int> v, int chislo){
  if (v.size()==0) {
    v.push_back(2);
  }else{
    int i = 0;
    while (v.back()<sqrt(chislo) && i<chislo) {
      if (etoFactor(i)) {
        v.push_back(i);
      }
      i++;
    }
  }
  return v;
}


int main(int argc, char const *argv[]) {
  int chislo;
  std::cout << "Ведите число которое считаете основным фактором " << '\n';
  std::cin >> chislo;
  std::cout << "Ответ " <<etoFactor(chislo)<< '\n';
  return 0;
}
