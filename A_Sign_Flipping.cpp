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
    vector<ll> A(n);
    input(A);
    for(ll i=0;i<n;i++){
        if((i+1)&1 and A[i]<0){
            A[i] = abs(A[i]);
        }
        else if((i+1)%2==0 and A[i]>0){
            A[i] = -(A[i]);
        }
    }
    for(auto i:A) cout<<i<<' ';
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