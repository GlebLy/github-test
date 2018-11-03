#include <iostream>

int cayhdiyaib(int a, int b, int predel){
  int i = 1;
  int sum=0;
  while (i<predel) {
    if (i%(a*b) == 0) {
      printf("Buzz Fizz\n" );
      sum+=i;
    } else if (i%a==0) {
      printf("Buzz\n" );
      sum+=i;
    } else if(i%b==0){
      printf("Fizz\n" );
      sum+=i;
    } else {
      std::cout << i << '\n';
    }
    i++;
  }
  return sum;
}

int main()
{
    std::cout << "Ведите каждый " << std::endl;
    int a;
    std::cin >> a;
    std::cout << "Еще " << '\n';
    int b;
    std::cin >> b;
    std::cout << "Ведите предел " << '\n';
    int predel;
    std::cin >> predel;
    std::cout << "Ответ>>>>"<<  cayhdiyaib(a,b,predel) << '\n';
    //system("pause"); // Только для тех, у кого MS Visual Studio
    return 0;
}
