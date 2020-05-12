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
    ll n;
    cin>>n;
    ll A[n];
    input(A,n);
    map<ll,ll> ans;
    map<ll,ll> C;
    for(auto i:A) C[i]++;
    // for(auto i:C) cout<<i<<" ";
    ll zinda = 0;
    // ll ans[n+1]={0};
    ans[1]=C[1];
    ans[0]=C[0];
    for(ll i=2;i<=100005;i++){
        ans[i]=max(ans[i-1],ans[i-2] + C[i]*i);
        if(ans[i]>zinda)zinda= ans[i] ;
    }
    cout<<zinda;
    return 0;
}