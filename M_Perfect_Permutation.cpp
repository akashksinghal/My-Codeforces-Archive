// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);  cout.tie(0);
#define input(A) for(auto &i:A) cin>>i;
signed main()
{
    fasino
    ll n;
    cin>>n;
    if(n&1) cout<<-1;
    else
    {
        vector<ll> A(n+1);
        for(int i=1;i<=n;i+=2){
            A[i]=i+1;
            A[i+1]=i;
        }
        for(int i=1;i<=n;i++){
            assert(A[A[i]]==i);
        }
        for(int i=1;i<=n;i++) cout<<A[i]<<' ';
    }
    return 0;
}