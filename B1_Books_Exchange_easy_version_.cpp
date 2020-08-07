// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i, --i;
void solve()
{
    ll n;
    cin>>n;
    vector<ll> A(n);
    input(A);
    vector<ll> res;
    for(ll i=0;i<n;i++){
        ll k = i, ans = 0;
        do{
            ans++;
            k = A[k];
        }while(k!=i);
        res.push_back(ans);
    }
    for(auto i:res) cout<<i<<" ";
    cout<<'\n';
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