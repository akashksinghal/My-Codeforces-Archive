// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    string A(n, 'a');
    for (int i = 0; i < n; i++)
        cout << char('a' + i % b);
    cout << '\n';
}
signed main()
{
    fasino int testcase;
    cin >> testcase;
    while (testcase--)
    {
        solve();
    }
    return 0;
}