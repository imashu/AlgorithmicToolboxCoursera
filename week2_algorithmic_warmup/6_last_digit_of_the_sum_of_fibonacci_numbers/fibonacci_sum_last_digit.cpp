#include <iostream>
typedef unsigned long long ll;
int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}
ll pisanoperiod(ll m)
{
    ll a=0;
    ll b=1;
    ll c=(a+b);
    for(ll i=0;i<m*m;i++)
    {
        c=(a+b)%m;
        a=b;
        b=c;
        if(a==0 && b==1)
            return i+1;
    }
}


ll get_fibonacci_huge_fast(ll n,ll m) {
    // write your code here
    ll rem=n%pisanoperiod(m);
    ll f=0,s=1;
    ll res=rem;
    for(int i=1;i<rem;i++)
    {
        res=(f+s)%m;
        f=s;
        s=res;
    }
    return res%m;

}

/* f(0)+f(1)+F(2)+F(3)+F(4)+........F(n)=f(n+2)-F(2)   */



int fibonacci_sum_fast(long long n) {



        int ld_nplus2=get_fibonacci_huge_fast(n+2,10);

        if(ld_nplus2>=1)
            return (ld_nplus2-1);
        else
            return 9;


}

int main() {
    long long n;
    std::cin >> n;
    std::cout << fibonacci_sum_fast(n);
}
