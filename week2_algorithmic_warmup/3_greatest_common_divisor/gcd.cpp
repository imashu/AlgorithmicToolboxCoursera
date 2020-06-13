#include <iostream>

/*
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
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

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout << euclid_gcd(a, b) << std::endl;
  return 0;
}
