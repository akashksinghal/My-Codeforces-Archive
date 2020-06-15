// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll n,mod;
    cin>>n>>mod;
    vector<ll> A(n);
    input(A,n);
    vector<ll> B(n);
    B[0]=A[0];
    for(ll i=1;i<n;i++){
        B[i]=A[i]+B[i-1];
    }
    ll maxi = INT32_MIN; ll k = B[n-1],r;
    // for(auto i:B) cout<<i<<" ";
    for(ll i=0;i<n-1;i++){
        r = k - B[i];
        ll o = (r%mod)+ B[i]%mod;
        // cout<<o<<" ";
        if(o>maxi)
            maxi = o;
        // cout<<r<<" ";
    }
    cout<<maxi<<'\n';
    return 0;
}