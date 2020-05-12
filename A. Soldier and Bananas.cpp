#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define ascend(A) sort(A.begin(),A.end())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    ll k,n,w;
    cin>>k>>n>>w;
    ll sum =0;
    for(ll i=1;i<=w;i++)
        sum+=i*k;
    if((sum-n)>0)
        cout<<(sum-n);
    else
        cout<<0;
    return 0;
}