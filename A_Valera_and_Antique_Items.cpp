// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,price,ans = 0;
    cin>>n>>price;
    set<ll> res;
    for(ll i=0,k;i<n;i++){
        cin>>k;
        for(int j=0,m;j<k;j++){
            cin>>m;
            if(m<price){
                res.insert(i+1);
            }
        }
    }
    cout<<res.size()<<'\n';
    for(auto i:res) cout<<i<<' ';
    return 0;
}