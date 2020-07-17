// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n, haves = 0,ans =0;
    cin>>n;
    vector<ll> A(n);
    input(A);
    asc(A);
    for(auto i:A){
        if(haves<i) haves++;
        if(haves>=i) haves=0, ans++;
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