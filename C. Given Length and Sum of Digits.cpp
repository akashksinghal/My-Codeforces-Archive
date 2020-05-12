// I'm a f*cking looser
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
int main()
{
    fasino
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
#endif
    ll m, n;
    cin >> m >> n;
    if(m == 1 & n == 0)
        cout<<"0 0";
    else if (n > 9 * m or n < 1)
        cout << "-1"
             << " "
             << "-1";
    else
    {
        auto possible = [&](int x, int y) {
            return (y >= 0 && y <= 9 * x);
        };
        ll sum = n;
        string mini = "";
        for (int i = 0; i < m; ++i)
            for (int d = 0; d < 10; ++d)
                if ((i > 0 || d > 0 || (m == 1 && d == 0)) && possible(m - i - 1, sum - d))
                {
                    mini += (char)(d + '0');
                    sum -= d;
                    break;
                }
        ll temp = n;
        string maxi = "";
        while (n - 9 > 0)
        {
            maxi += "9";
            n -= 9;
        }
        maxi += to_string(n);
        while (maxi.length() != m)
            maxi += "0";
        cout << mini << " " << maxi;
    }
    return 0;
}