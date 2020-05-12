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
    ll n,m, ans = INT16_MAX;
    cin>>n>>m;
    vector<ll> A(m);
    input(A,m);
    asc(A);
    for(int i=0;i<m-n+1;i++)
        ans = min(A[i+n-1]-A[i],ans);
    cout<<ans;
    return 0;
}