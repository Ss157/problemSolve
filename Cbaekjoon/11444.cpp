#include <iostream>
#include <map>

using namespace std;

map<long long, long long> f;

long long fibo(long long n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;

    if (f.count(n) > 0)
        return f[n];

    // long long ans = 0;
    if (n % 2 == 0) // Â¦¼ö
    {
        long long m = n / 2;
        long long tmp1 = fibo(m);
        long long tmp2 = fibo(m - 1);
        f[n] = tmp1 * (2LL * tmp2 + tmp1) % 1000000007;
        return f[n];
    }
    else // È¦¼ö
    {
        long long m = (n + 1) / 2;
        long long tmp1 = fibo(m);
        long long tmp2 = fibo(m - 1);
        f[n] = (tmp2 * tmp2 + tmp1 * tmp1) % 1000000007;
        return f[n];
    }
}

int main(void)
{
    long long n;
    cin >> n;
    cout << fibo(n);
}