#include <iostream>
typedef unsigned long long ll;
//
//ll get_fibonacci_huge_naive(ll n, ll m) {
//    if (n <= 1)
//        return n;
//
//    ll previous = 0;
//    ll current  = 1;
//
//    for (ll i = 0; i < n - 1; ++i) {
//        ll tmp_previous = previous;
//        previous = current;
//        current = tmp_previous + current;
//    }
//
//    return current % m;
//}

//https://www.youtube.com/watch?v=Nu-lW-Ifyec     new concept  - Pisano Period
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



int main() {
    ll n, m;
    std::cin >> n >> m;

     std::cout <<get_fibonacci_huge_fast(n, m)<<"\n" ;

}
