#include <iostream>
#include "aux.h"
#include <vector>
#include <cmath>

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
