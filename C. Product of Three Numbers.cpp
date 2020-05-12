#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);
#define asc(A) sort(A.begin(), A.end())
#define dsc(A) sort(A.begin(), A.end(), greater<ll>())
#define input(A, N)            \
    for (ll i = 0; i < N; i++) \
        cin >> A[i];
void solve()
{
    ll n;
    cin >> n;
    ll a, b, c;
    a = -1, b = -1, c = -1;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            a = i;
            n /= i;
            break;
        }
    }
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 and i != a and (n / i) != a and (i != (n / i)))
        {
            b = i;
            c = n / i;
            break;
        }
    }
    if (a == -1 or b == -1 or c == -1)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        cout << a << ' ' << b << ' ' << c << endl;
    }
}
int main()
{
    fasino
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
#endif
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}