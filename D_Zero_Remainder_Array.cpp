// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, k, maxi = 0;
    cin >> n >> k;
    vector<ll> A(n);
    map<ll, ll> mp;
    input(A);
    for (auto &i : A)
        i %= k, i = (k - i) % k, mp[i]++;
    for (auto i : mp)
    {
        if (i.first == 0)
            continue;
        ll m = ((i.second - 1) * (k)) + i.first + 1;
        maxi = max(m, maxi);
    }
    cout << maxi << '\n';
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