#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
std::vector<int> summaOfmatrix(int ** txt, size_t rows, size_t cols){
  std::vector<int> v(50);
    for (size_t j = 0; j < cols; j++) {
      int i = 0;
      int summa = 0;
      while (i<rows) {
        summa += txt[i][j];
        //std::cout << "[" <<i<< "][" << j << "]: " << txt[i][j] << '\n';
        i++;
    }
    v[j] = summa;
  }
  return v;
}
int** create2DArray(std::ifstream& myfile, unsigned height, unsigned width)
{
  std::cout << __func__ <<std::endl;
  int** array2D = 0;
  array2D = new int*[height];
  std::string LargeSum;
  if(myfile.is_open()){
    unsigned h = 0;
    while (getline(myfile, LargeSum) && (h < height)) {
      //std::cout << h <<": " << LargeSum << '\n';
      array2D[h] = new int[width];
      unsigned w = 0;
      while (w < width ) {
        char txt = LargeSum[w];
        array2D[h][w] = txt - '0';
        w++;
      }
      h++;
    }
  }
  return array2D;
}
void process_pointer_2_pointer(int **array, size_t rows, size_t cols)
{
    std::cout << __func__ << std::endl;
    for (size_t i = 0; i < rows; ++i)
    {
        std::cout << i << ": ";
        for (size_t j = 0; j < cols; ++j)
            std::cout << array[i][j] << '\t';
        std::cout << std::endl;
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
int getDigits(int a, int b){
  int summa = 0;
  while (a > 9) {
    a -= 10;
    summa += 10;
  }
  return summa;
}
void createVectorOfDigits(std::vector<int>& v) {
  unsigned i = v.size() - 1;
  int summa = 0;
  while (i > 0) {
    summa = getDigits(v[i], v[i-1]);
    //std::cout << "Сумма: "<< summa << '\n';
    v[i] -= summa;
    v[i-1] += summa/10;
    i--;
  }
}
int main() {
  unsigned height = 100;
  unsigned width = 50;
  std::string firstTen;
  ifstream file("LargeSumCol");
  int** my2DArray = create2DArray(file, height, width);
  //process_pointer_2_pointer(my2DArray, height, width);
  std::vector<int> v;
  v = summaOfmatrix(my2DArray, 100, 50);
  showVector(v);
  std::vector<int> w;
  w.push_back(1);
  w.push_back(111);
  showVector(w);
  int i=1;
  int su = getDigits(w[i--], w[i]);
  createVectorOfDigits(v);
  showVector(v);
  return 0;
}
