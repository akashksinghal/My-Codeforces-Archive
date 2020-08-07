// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n,k, asn =0;
    cin>>n>>k;
    vector<ll> A(n),B(n,0);
    input(A);B[0]=A[0];
    for(int i=1;i<n;i++){
        if(A[i]+B[i-1]>=k) B[i] = A[i];
        else{
            B[i] = abs(k-B[i-1]);
            asn += (k-B[i-1]-A[i]);
        }
    }
    cout<<asn<<'\n';
    for(auto i:B) cout<<i<<' ';
    return 0;
}