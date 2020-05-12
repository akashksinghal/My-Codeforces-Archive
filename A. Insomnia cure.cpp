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
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    bool A[d+1];
    memset(A,false,d+1);
    for(ll i=k;i<=d;i+=k)
        A[i]=true;
    for(ll i=l;i<=d;i+=l)
        A[i]=true;
    for(ll i=m;i<=d;i+=m)
        A[i]=true;
    for(ll i=n;i<=d;i+=n)
        A[i]=true;
    ll count = 0;
    for(ll i=1;i<=d;i++)
        if(A[i])
            count++;
    cout<<count<<"\n";
    return 0;
}