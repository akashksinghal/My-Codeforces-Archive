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
    ll n,m;
    cin>>n;
    vector<ll> A(n);
    input(A,n);
    for(int i=1;i<n;i++){
        A[i]+=A[i-1];
    }
    // for(auto i:A) cout<<i<<' ';
    cin>>m; 
    vector<ll> B(m);input(B,m);
    for(auto i:B){
        cout<<lower_bound(A.begin(),A.end(),i)-A.begin() +1<<'\n';
    }
    return 0;
}