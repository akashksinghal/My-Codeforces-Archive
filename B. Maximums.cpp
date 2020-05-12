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
    ll n,ans = 0;
    cin>>n;
    vector<ll> A(n);
    input(A,n);
    // for(auto i:A) cout<<i<<" ";
    vector<ll> B(n);
    // for(auto i:B) cout<<i<<" ";
    cout<<A[0]<<" ";
    ans+=max(ans,A[0]);
    for(ll i=1;i<n;i++){
        cout<<ans+A[i]<<" ";
        ans=max(ans+A[i],ans);
    }
    return 0;
}