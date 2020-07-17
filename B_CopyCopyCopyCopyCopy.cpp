// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(n);
    set<ll> B;
    for (auto &i : A)
        cin >> i, B.insert(i);
    cout << B.size() << '\n';
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