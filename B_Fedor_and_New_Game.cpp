// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    vector<ll> A(m+1);
    input(A);
    for(int i=0;i<m;i++){
        if(__builtin_popcountll(A[i]^A[m])<=k) ans++;
    }
    cout<<ans;
    return 0;
}