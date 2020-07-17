// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
void solve()
{
    ll n;
    cin >> n;
    vector<ll> A(2 * n);
    vector<pair<ll, ll>> odd;
    vector<pair<ll, ll>> evv;
    ll od = 0, ev = 0, j = 0;
    for (auto &i : A)
    {
        cin >> i;
        if (i & 1)
        {
            assert(i>=1 && i<=1000);
            od++;
            odd.push_back({i, j + 1});
        }
        else if(i!=0)
        {
            assert(i>=1 && i<=1000);
            ev++;
            evv.push_back({i, j + 1});
        }
        j++;
    }
    ll printed = 0;
    for (ll i = 0; i < evv.size(); i += 2)
    {
        if (i + 1 < evv.size() && printed < 2 * (n - 1))
        {
            cout << evv[i].second << " " << evv[i + 1].second << '\n';
            printed += 2;
        }
        else
            break;
    }
    ll left = max(0LL, (2 * (n - 1)) - printed);
    for (ll i = 0; i < left; i += 2)
    {
        if (i + 1 < odd.size() && printed < 2 * (n - 1))
        {
            cout << odd[i].second << " " << odd[i + 1].second << '\n';
            printed += 2;
        }
        else
            break;
    }
    assert(printed==2*(n-1));
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