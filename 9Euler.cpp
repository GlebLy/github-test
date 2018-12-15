#include <iostream>
#include <cmath>
//#include <chrono>

int *pytagor1000(){
  int *v = new int[3];
  int a = 0;
  while (a<1000) {
    int b = 0;
    while (a+b<1000) {
      if (pow(a,2) + pow(b,2) == pow(1000-a-b,2)) {
        v[0] = a;
        v[1] = b;
        v[2] = 1000 - a - b;
        if (v[0]!=0 & v[1]!=0 & v[2]!= 0 ) {
          std::cout << "a="<< a <<",b="<< b<<",c="<< v[2]<< '\n';
          return v;
        }
      }
      b++;
      //std::cout << "b = "<< b << '\n';
    }
    a++;
    //std::cout << "a = "<< a << ":" << '\n';
  }
  return v;
}

long produktPytagor(int *v){
  long otwet;
  int i = 0;
  while (i<2) {
    otwet*=v[i];
    i++;
  }
  return otwet;
}

int main() {
  /* code */
  //auto start = std::chrono::steady_clock::now();
  //auto end = std::chrono::steady_clock::now();
  //auto time = start - end;
  std::cout << "Ответ = "<< produktPytagor(pytagor1000()) << '\n';
  return 0;
}
