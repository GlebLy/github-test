#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <typeinfo>
#include <vector>
using namespace std;
#define getName(var) #var
void display(vector<int> &v)
{
  if (v.size()==0) {
    std::cout << "Null" << '\n';
  }else{

    for(int i; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n" << endl;
}
}
long int stroki(int **a, size_t rows, size_t cols){
  std::cout << __func__ << '\n';
  int i = 0;
  long int maxi;
  for (size_t i = 0; i < rows; i++) {
    int j = 0;
    maxi = (a[i][j]);
    for (size_t j = 0; j < cols - 3; j++) {
      if (maxi < (a[i][j])*(a[i][j+1])*(a[i][j+2])*(a[i][j+3])) {
        //std::cout <<"i="<<i<<", j="<<j<< ": ["<<  a[i][j]<<", "<<a[i][j+1]<<", "<< a[i][j+2]<< ", "<< a[i][j+3]<<"]" << '\n';
        maxi = (a[i][j])*(a[i][j+1])*(a[i][j+2])*(a[i][j+3]);
      }
    }
  }
  std::cout << maxi << '\n';
  return maxi;
}
long int stolbcy(int **a, size_t rows, size_t cols){
  std::cout << __func__ << '\n';
  int i = 0;
  long int maxi;
  for (size_t i = 0; i < rows; i++) {
    int j = 0;
    maxi = (a[i][j]);
    for (size_t j = 0; j < cols - 3; j++) {
      if (maxi < (a[j][i])*(a[j+1][i])*(a[j+2][i])*(a[j+3][i])) {
        //std::cout <<"i="<<i<<", j="<<j<< ": ["<<  a[i][j]<<", "<<a[i][j+1]<<", "<< a[i][j+2]<< ", "<< a[i][j+3]<<"]" << '\n';
        maxi = (a[j][i])*(a[j+1][i])*(a[j+2][i])*(a[j+3][i]);
      }
    }
  }
  std::cout << maxi << '\n';
  return maxi;
}
long int diagonali(int **a, int **b, size_t rows, size_t cols){
  std::cout << __func__ << '\n';
  int i = 0;
  long int maxi;
  std::vector<std::vector<int> > v;
  int h = 0;
  std::vector<int> w;
  while (h < 39) {
    v.push_back(w);
    h++;
  }
  //std::cout << "длина вектора: "<< v.size() << '\n';
  while (i < rows) {
    int j = 0;
    while (j < cols) {
      //std::cout << "i = "<< i <<", " << "j = "<< j << ": "<< "a[i][j] = "<< a[i][j] << '\n';
      (v[b[i][j] - 1]).push_back(a[i][j]);
      //display(v[b[i][j]-1]);
      j++;
    }
    i++;
  }
  maxi = (a[0][0]);
  //std::cout << "maxi = "<< maxi << '\n';
  //printf("Разделенно по диагоналям\n");
  int k = 0;
  while (k < v.size()) {
    i = 0;
    std::vector<int> w = v[k];
    int wRazmer = w.size();
    //display(w);
    //std::cout << "k = "<< k<<"=>"<<wRazmer << '\n';
    while( (i + 3 < wRazmer) && (wRazmer > 3)) {
      if (maxi < w[i]*w[i+1]*w[i+2]*w[i+3]) {
        maxi = w[i]*w[i+1]*w[i+2]*w[i+3];
        std::cout << "maxi = "<< maxi <<"["<<w[i]<<", "<<w[i+1]<<", "<<w[i+2]<<", "<<w[i+3]<<"]"<< '\n';
      }
      i++;
    }
    k++;
  }
  return maxi;
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
int** create2DArray(ifstream& myfile, unsigned height, unsigned width)
{
  std::cout << __func__ <<std::endl;
  int** array2D = 0;
  array2D = new int*[height];
  string line;
  if(myfile.is_open()){
    int h = 0;
    while (getline(myfile,line) && (h < height)) {
      //std::cout << h <<": " <<line<< '\n';
      array2D[h] = new int[width];
      istringstream iss(line);
      int w = 0;
      while (w < width ) {
        int nomer;
        if (iss >> nomer) {
          array2D[h][w] = nomer;
        }
        w++;
      }
      h++;
    }
  }
  return array2D;
}

int main()
{
  ifstream matrixEuler11("test.txt");
  ifstream matrixB("b.txt");
  ifstream matrixAB("ab.txt");
  printf("Creating a 2D array2D\n");
  printf("\n");
  int height = 20;
  int width = 20;
  printf("name: %s\n", getName(my2DArray) );
  int** my2DArray = create2DArray(matrixEuler11, height, width);
  printf("name: %s\n", getName(matricaB) );
  int** matricaB = create2DArray(matrixB, height, width);
  printf("name: %s\n", getName(matricaAB) );
  int** matricaAB = create2DArray(matrixAB, height, width);
  printf("Array sized [%i,%i] created.\n\n", height, width);
    stroki(my2DArray,height,20);
    stolbcy(my2DArray,height,20);
    diagonali(my2DArray, matricaB, height, width);
    diagonali(my2DArray, matricaAB, height, width);
    return 0;
}
