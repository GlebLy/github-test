#include <iostream>

int kolDelitelej(int triugolnoe){
  int schetchik = 0;
  int i = 1;
  /*std::cout <<"i="<< i << '\n';
  std::cout << "triugolnoe="<< triugolnoe << '\n';
  int ostatok = triugolnoe % i;
  std::cout << "triugolnoe%i="<< ostatok<< '\n';*
  */while (i < triugolnoe+1) {
    if (triugolnoe % i == 0) {
      //std::cout << "delitel="<<i << '\n';
      schetchik++;
    }
    i++;
    //std::cout << i << '\n';
  }
  return schetchik;
}
long long int triugolnojChisloS(int deliteli){
  unsigned int i = 1;
  long long int triugolnoe = 0;
  int kolichestvoDelitelej = 0;
  while (kolichestvoDelitelej < (deliteli+1)) {
    //std::cout <<"i="<< i << '\n';
    triugolnoe = i*(i+1)/2;
    //std::cout << "triugolnoe="<<triugolnoe << '\n';
    if (kolichestvoDelitelej<kolDelitelej(triugolnoe)) {
      kolichestvoDelitelej = kolDelitelej(triugolnoe);
      //std::cout << "kolichestvo delitelej="<< kolichestvoDelitelej << '\n';
    }
    i++;
  }
  return triugolnoe;
}
int main() {
  std::cout << "Ведите количество делителей у триуголного числа: " << '\n';
  int deliteli;
  std::cin >> deliteli;
  std::cout << "количество делителей у 76576500: "<< kolDelitelej(76576500) << '\n';
  std::cout << "Ответ: "<< '\n';
  std::cout <<  triugolnojChisloS(deliteli) << '\n';
  return 0;
}
