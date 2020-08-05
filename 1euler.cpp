#include <iostream>
using namespace std;
/*wR6-c54-k9b-U2U*/
int sumD3y5(int n){
  int sum = 0;
  int i = 2;
  while (i < n) {
    if (i%3==0 && i%5==0 || i%3==0 || i%5==0) {
      sum +=i;
    }
    i++;
  }
  return sum;
}

int main() {
  int n;
  cout << "Вставь число больше 5: " << '\n';
  cin >> n;
  cout << "Сумма чисел меньше "<< n << " и делящегося на 3 и 5 равна: " << sumD3y5(n) << '\n';
  return 0;
}
