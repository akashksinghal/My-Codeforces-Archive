// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
int gcd(int x, int y)
{
    return (x==0)? y : gcd(y % x, x);
}
signed main()
{
    fasino
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = 0;
    while (n >= 0)
    {
        ans++;
        if (ans & 1)
        {
            ll k = __gcd(a, n);
            n -= k;
        }
        else
        {
            ll k = __gcd(b, n);
            n -= k;
        }
    }
    cout<<(ans&1)?1:0;
    return 0;
}