#include <iostream>

/*
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}
*/

long long c;
long long euclid_gcd(long a,long b)
{
  if(b==0)
    return a;
  else
    c=a%b;
  return euclid_gcd(b,c);
}

long long lcm_fast(long a, long b) {

    long long lcm=(a*b)/euclid_gcd(a,b);
    return (long) lcm;
}


int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
