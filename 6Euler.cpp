#include <iostream>
#include <iomanip>

using namespace std;


int main() {
  unsigned int DIM1;
  std::cout << "Ведите размер: " << '\n';
  std::cin >> DIM1;

  int a[DIM1][DIM1];
  int at[DIM1][DIM1];
  int a2[DIM1][DIM1];
  int diag[DIM1][DIM1];
  int listRaz[DIM1][DIM1];
    int sum = 0;
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM1; j++) {
            a[i][j] = (i + 1);
            at[i][j] = (j + 1);
            a2[i][j] = at[i][j]*a[i][j];
            if (i==j) {
              diag[i][j] = (i+1)*(i+1);
            }else{
              diag[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM1; j++) {

            listRaz[i][j] = a2[i][j] - diag[i][j];

        }
    }

/*
        for(int x=0;x<DIM1;x++)  // loop 3 times for three lines
       {
           for(int y=0;y<DIM1;y++)  // loop for the three elements on the line
           {
               cout<<" "<<a2[x][y];  // display the current element out of the array
           }
       cout<<endl;
     }

    for(int x=0;x<DIM1;x++)  // loop 3 times for three lines
   {
       for(int y=0;y<DIM1;y++)  // loop for the three elements on the line
       {
           cout<<" "<<diag[x][y];  // display the current element out of the array
       }
   cout<<endl;  // when the inner loop is done, go to a new line
   }
*/
       for(int x=0;x<DIM1;x++)  // loop 3 times for three lines
      {
          for(int y=0;y<DIM1;y++)  // loop for the three elements on the line
          {
              cout<<" "<<listRaz[x][y];
              sum += listRaz[x][y];  // display the current element out of the array
          }
      cout<<endl;  // when the inner loop is done, go to a new line
      }
      std::cout << "Ответ: " << sum << '\n';
  }
