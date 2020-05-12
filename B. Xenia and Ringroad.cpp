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
    ll n,m; cin>>n>>m;
    vector<ll> A(m);
    input(A,m);
    ll cur = 1, time = 0;
    for(auto i: A)
    {
        if(cur<=i && i<=n)
        {
            time += (i-cur);
            cur = i;
        }
        else
        {
            time += (n-cur)+i;
            cur = i;
        }
    }
    cout<<time;
    return 0;
}