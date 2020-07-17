// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,m;
    cin>>n>>m;
    vector<ll> A;
    for(int i=2;i<=50;i++){
        bool flag = true;
        for(int j=2;j*j<=i;j++) if(i%j==0) {flag = false; break;}
        if(flag) A.push_back(i);
    }
    ll k = lower_bound(A.begin(),A.end(), n)-A.begin();
    if(A[k+1]==m) cout<<"YES";
    else cout<<"NO";
    return 0;
}