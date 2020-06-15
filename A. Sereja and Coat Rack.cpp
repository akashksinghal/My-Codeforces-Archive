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
    ll n,d;
    cin>>n>>d;
    vector<ll> A(n);
    input(A,n);
    asc(A);
    ll m;
    cin>>m;
    ll profits = 0;
    for(int i=0;i<min(m,n);i++){
        profits+=A[i];
    }
    if(m>n){
        profits-=((m-n)*d);
    }
    cout<<profits;
    return 0;
}