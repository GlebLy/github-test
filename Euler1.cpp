#include <iostream>
#include <cstdlib> // для system
using namespace std;

int cayhdiy(int n, int predel ){
  int i = 2;
  int sum = 0;
  while (i<predel) {
    if(i%n==0){
      sum+=i;
    }
    i++;
  }
  return sum;
}

int main()
{
    cout << "Ведите каждый " << endl;
    int a;
    std::cin >> a;
    std::cout << "Еще " << '\n';
    int b;
    std::cin >> b;
    std::cout << "Ведите предел " << '\n';
    int predel;
    std::cin >> predel;
    std::cout << "Ответ>>>>"<<  cayhdiy(a,predel)+cayhdiy(b,predel)-cayhdiy(a*b, predel) << '\n';
    //system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}
