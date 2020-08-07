// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, ans = 0;
    cin >> n;
    for (ll i = 1; i < n; i++)
        ans += (n - i) * i;
    cout << ans + n << '\n';
    return 0;
}