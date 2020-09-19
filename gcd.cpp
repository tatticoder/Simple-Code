#include <iostream>

int gcd_naive(int a, int b)
{
  if (b)
  {
    a = a % b;
    return gcd_naive(b, a);
  }
  else
  {
    return a;
  }
}

int main()
{
  int a, b;
  std::cin >> a >> b;
  std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
