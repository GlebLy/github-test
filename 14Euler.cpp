#include <iostream>
#include <stdio.h>
#include <stdlib.h>

long lengthCollatzSeq(int n){
  long i = n;
  long count = 0;
  //std::cout << "[" ;
  while (i > 1) {
    //std::cout << i << ", ";
    if (i%2 == 0) {
      i /= 2;
      count += 1;
    }else{
      i = (3*i + 1)/2;
      count += 2;
    }
  }
  //std::cout << "]" << '\n';
  //count++;
  return count;
}

int maxLengthCollatzSeq(int n){
  int i = n;
  int max = 0;
  int j = 0;
  while (i > 1) {
    long l = lengthCollatzSeq(i);
    if(l > max) {
      max = l;
      std::cout << "max = " << max << " , число = "<< i << '\n';
      j = i;
    }
    i--;
  }
  return max;
}

int main() {
  int n;
  std::cout << "Ведите начало последовательности чисел" << '\n';
  std::cin >> n;
  std::cout << "Длина: "<< lengthCollatzSeq(n) << '\n';

  std::cout << "Ведите большое число" << '\n';
  std::cin >> n;
  std::cout << "Самое длиное : "<< maxLengthCollatzSeq(n) << '\n';
  return 0;
}
