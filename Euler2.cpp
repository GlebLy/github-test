#include <iostream>
#include <vector>

long int summaFibonacci(int predel){
  //std::vector<int> v;
  //v[0] = 1;
  //v[1] = 2;
  long long int prededuscij = 1;
  std::cout << prededuscij << " на "<< 1 << '\n';
  long long int sechasnij = 2;
  std::cout << sechasnij << " на "<< 2 << '\n';
  long long int sleduyuscij = 3;
  int i = 2;
  long long int summa = 2;
  while (i<predel&&sechasnij<predel) {
    //v[i] = v[i-1]+v[i-2];
    sleduyuscij = sechasnij + prededuscij;
    if (sleduyuscij%2==0) {
      summa+=sleduyuscij;
    }
    std::cout << sleduyuscij << " на " << i << '\n';
    prededuscij = sechasnij;
    sechasnij = sleduyuscij;
    i++;
  }
  std::cout << "Ответ "<< sechasnij + prededuscij << " на "<< i << '\n';
  std::cout << "Сумма: " << '\n';
  return summa;
}

int main() {
  std::cout << "Ведите предел " << '\n';
  int predel;
  std::cin >> predel;
  std::cout << "Ответ "  << '\n';
  std::cout << summaFibonacci(predel)  << '\n';
  return 0;
}
