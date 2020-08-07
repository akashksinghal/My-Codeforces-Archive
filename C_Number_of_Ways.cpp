// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll int n, sum=0, temp=0, ans = 0;
    cin>>n;
    vector<ll> A(n);
    for(auto &i:A) cin>>i, sum+=i;
    if (sum % 3 == 0)
    {
        sum /= 3;
        vector<ll> cnt(n, 0);
        for (ll i = n - 1; i >= 0; i--)
        {
            temp += A[i];
            if (temp == sum)
                cnt[i] = 1;
        }
        temp = 0;
        for (ll i = n - 2; i >= 0; i--)
            cnt[i] += cnt[i + 1];
        for (ll i = 0; i < n - 2; i++)
        {
            temp += A[i];
            if (temp == sum)
                ans += cnt[i + 2];
        }
    }
    cout << ans;
    return 0;
}