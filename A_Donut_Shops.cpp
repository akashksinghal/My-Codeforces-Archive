// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (c <= a)
        cout << -1;
    else
        cout << 1;
    cout << " ";
    if (a * b <= c)
        cout << -1;
    else
        cout << b;
    cout << '\n';
}
signed main()
{
    fasino
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}