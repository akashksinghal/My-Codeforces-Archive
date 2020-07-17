// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
signed main()
{
    fasino
    ll n, k, t, a, b, ans = 0;
    cin >> n >> k;
    vector<ll> both, ALI, BOB;
    for (int j = 0; j < n; j++)
    {
        cin >> t >> a >> b;
        if (a & b)
            both.push_back(t);
        else if (a)
            ALI.push_back(t);
        else if (b)
            BOB.push_back(t);
    }
    asc(ALI);
    asc(BOB);
    for (int i = 0; i < min(ALI.size(), BOB.size()); i++)
        both.push_back(ALI[i] + BOB[i]);
    asc(both);
    if (both.size() < k)
    {
        cout << -1;
        return 0;
    }
    for (int i = 0; i < k; i++)
        ans += both[i];
    cout << ans;
    return 0;
}