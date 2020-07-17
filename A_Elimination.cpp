// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    int c, d, n, m, k;
    cin >> c >> d >> n >> m >> k;
    int req = n * m - k;
    if (req <= 0)
        cout << 0 << '\n';
    else
    {
        int res = (int)1e7;
        for (int i = 0; i <= req; i++)
        {
            int k = i * c;
            int j = max(0, (int)(req - i * n));
            k += j * d;
            res = min(res, k);
        }
        cout << res << '\n';
    }
    return 0;
}