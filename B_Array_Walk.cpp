// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, k, z, ans = 0;
    cin >> n >> k >> z;
    vector<ll> A(n);
    input(A);
    for (ll i = 0; i <= z; i++){
        ll ko = k - 2*i;
        if (ko < 0)
            continue;
        ll sum = 0, maxi = 0;
        for (int j = 0; j <= ko; j++)
        {
            if(j<n-1){
                maxi = max(maxi,A[j]+A[j+1]);
            }
            sum += A[j];
        }
        ans = max(ans, sum + i*maxi);
    }
    cout<<ans<<'\n';
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