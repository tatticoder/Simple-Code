#include <iostream>
int gcd_fast(int a, int b)
{
  if (b)
  {
    a = a % b;
    return gcd_fast(b, a);
  }
  else
  {
    return a;
  }
}
long long lcm_naive(int a, int b)
{
  int val = gcd_fast(a, b);

  // if (val == 1)
  // {
  //   return a * b;
  // }
  // else
  // {
    // val = gcd_fast(a, b);
    a = a / val;
    // b = b / val;

  //    std::cout<<"found factor "<<val<<" a = "<<a<<" b = "<<b<<"\n";
  // }
  // std::cout<<"returning with "<<val<<"\n";
  return (long long)a*b;
}

int main()
{
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_naive(a, b) << std::endl;
  return 0;
}
