#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k, count = 0;
    cin >> n >> m >> k;

    long long mn = min({n, m, k});

    count += mn;
    n = n - mn;
    m = m - mn;
    k = k - mn;

    mn = min(n / 2, k);

    count += mn;

    cout << count;
}