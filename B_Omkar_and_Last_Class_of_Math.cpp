// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
void solve()
{
    ll n;
    cin>>n;
    if(!(n&1)){
        cout<<n/2<<" "<<n/2<<'\n';
    }
    else{
        ll ans=1;
        for(ll i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<n) ans = max(i,ans);
                if(n/i<n) ans = max(n/i,ans);
            }
        }
        ll rem = n/ans;
        ll k = ans * (rem-1);
        cout << k <<' '<< ans <<'\n';
    }
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