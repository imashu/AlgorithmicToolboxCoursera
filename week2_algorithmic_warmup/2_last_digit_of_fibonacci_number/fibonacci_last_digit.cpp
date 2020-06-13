#include <iostream>
/*
int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}
*/
unsigned long long get_fibonacci_last_digit_fast(int n) {
    // write your code here
    unsigned long long f[n];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
        f[i]=(f[i-1]+f[i-2])%10;
    return f[n];
}

int main() {
    int n;
    std::cin >> n;
    unsigned long long c = get_fibonacci_last_digit_fast(n);
    std::cout << c << '\n';
    }
