// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,tmp,al=0,la=0,m;
    cin>>n;
    unordered_map<ll,ll> A;
    for(ll i=1;i<=n;i++) cin>>tmp, A[tmp] = i;
    cin>>m;
    for(ll i=1;i<=m;i++) cin>>tmp, al+=A[tmp], la+=(n-A[tmp])+1;
    cout<<al<<" "<<la;
    return 0;
}