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
    ll n, ans = 0;
    cin >> n;
    vector<ll> A(n);
    input(A);
    map<ll, ll> mp;
    for (auto i : A)
        mp[i]++;
    while (true)
    {
        int cnt = -1;
        bool k(true);
        for (auto &i : mp)
        {
            if (i.second > 0)
            {
                cnt++;
                i.second--;
                k = false;
            }   
        }
        if (cnt > 0)
            ans += cnt;
        if (k)
            break;
    }
    cout << ans;
    return 0;
}