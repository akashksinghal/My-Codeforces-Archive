// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
signed main()
{
    fasino
    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    vector<ll> v = {d1 + d2 + d3, 2 * (d1 + d3), 2 * (d2 + d3), 2 * (d1 + d2)};
    cout << *min_element(v.begin(),v.end());
    return 0;
}