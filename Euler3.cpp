#include <iostream>
//#include <cmath>

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

long long kor(long long kwadrat){
  //вернет нам корень или ближайшее число квадрат которого превышает наше число
  long long otwet = 1;
  while (otwet<kwadrat) {
    if (kwadrat == otwet*otwet) {
      return otwet;
    }
    if (kwadrat<otwet*otwet) {
      return otwet;
    }
    otwet++;
  }
  return otwet;
}

long long welikijFaktor(long long chislo){
  long long faktor = 0;
  if (etoFactor(chislo)) {
    std::cout <<"это фактор  "<< "["<<chislo<<"]"<<'\n';
    return chislo;
  }else{
    long long i = 1;
    //std::cout << "корень "<< kor(chislo) << std::endl;
    //std::cout << "flag "<< i << std::endl;
    //long long koren = kor(chislo);
    /*while (i<=kor(chislo)) {
      if (chislo%i==0 && etoFactor(i)) {
        faktor = i;
        std::cout << "["<<i<<"]";
      }
      i++;
    }*/
    long long rasdel = chislo;
    while (rasdel != 1 && rasdel != 0) {
      //std::cout << "rasdel="<< rasdel << '\n';
      //std::cout << "i=" << i << '\n';
      if (rasdel%i==0 && etoFactor(i)) {
        int k = 0;
        while (rasdel%i==0 && rasdel!=0) {
          rasdel=rasdel/i;
          faktor = i;
          k++;
          //std::cout << "/* message */"<< rasdel << '\n';
        }
        std::cout << "["<<i<<"^"<<k<<"]";
      }
      i++;
    }
  }
  std::cout  << '\n';
  return faktor;
}

int main() {
  long long chislo;
  std::cout << "Ведите число " << '\n';
  std::cin >> chislo;
  std::cout << "корень<="<< kor(chislo) << '\n';
  std::cout << "Ответ " <<welikijFaktor(chislo)<< '\n';
  return 0;
}
