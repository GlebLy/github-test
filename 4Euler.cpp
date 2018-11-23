#include <string>
#include <iostream>
#include <cmath>

bool isPalindrom(int chislo){
  std::string a = std::to_string(chislo);
  int i = 0;
  while (i < a.size()/2) {
    if (a[i] != a[a.size()-1-i]) {
      return false;
    }
    i++;
  }
  return true;
}

int biggerPalindrom(int nznachnyj){
  int i = pow(10,(nznachnyj))-1;
  int predel = pow(10,nznachnyj-1)-1;
  int palin = 0;
  while (i>predel) {
    int j = pow(10,(nznachnyj))-1;
    if (!isPalindrom(i*j)) {
      while (j>predel) {
        //std::cout << "произведение между"<< i <<"и" << j <<"равняется"<< i*j << '\n';
        if (isPalindrom(i*j)) {
          //std::cout << i << "*"<< j<<"="<<i*j<<";";
          if (palin < i*j) {
            palin = i*j;
          }
        }
        j--;
      }
    }
    i--;
  }
  return palin;
}

int main() {
  std::cout << "Ведите количество чисел чей продукт это полидром: " << '\n';
  int chislo;
  std::cin >> chislo;
  /*if (isPalindrom(chislo)) {
    std::cout << "Это полидром" << '\n';
  }else{
    std::cout << "Это не полидром" << '\n';
  }*/
  std::cout << biggerPalindrom(chislo) << '\n';
  return 0;
}
