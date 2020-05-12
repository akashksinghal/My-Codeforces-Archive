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
    ll n,x,count =0;
    cin>>n>>x;
    for(ll i=2;i<=n;i++)
    {
        if(x%i==0 && x>=i*1 && x<=i*n){
            count++;
        }
    }
    if(n>=x) count++;
    cout<<count<<"\n";
    return 0;
}