// Optimized Program to find last
// digit of nth Fibonacci number
#include<iostream>
using namespace std;

typedef long long int ll;

// Finds nth fibonacci number
ll fib(ll f[], ll n)
{
    // 0th and 1st number of
    // the series are 0 and 1
    f[0] = 0;
    f[1] = 1;

    // Add the previous 2 numbers
    // in the series and store
    // last digit of result
    for (ll i = 2; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 10;

    return f[n];
}

// Returns last digit of n'th Fibonacci Number
int findLastDigit(int n)
{
    ll f[60] = {0};

    // Precomputing units digit of
    // first 60 Fibonacci numbers
    fib(f, 60);

    return f[n % 60];
}

// Driver code
int main ()
{
    ll n = 239;
    cout << findLastDigit(n) << endl;

    return 0;
}
