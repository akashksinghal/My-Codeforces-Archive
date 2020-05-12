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
    if(n&1)
    {
        ll o = (n+1)/2;
        ll sum = -(o*o);
        ll e = (n)/2;
        sum+=e*(e+1);
        cout<<sum;
    }
    else
    {
        ll o = (n)/2;
        ll sum = -(o*o);
        ll e = (n)/2;
        sum+=e*(e+1);
        cout<<sum;
    }
    return 0;
}