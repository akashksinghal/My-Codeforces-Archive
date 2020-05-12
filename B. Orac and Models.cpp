// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i];
const int mx = 100005;
ll maxi[mx];
ll ar[mx+1],n;
void solve()
{
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>ar[i];
    ll res = 0;
    for(ll i=0;i<=n;i++) maxi[i]=1;
    for(ll i=1;i<=n;i++){
        for(ll j=i+i;j<=n;j+=i){
            if(ar[j]>ar[i])
                maxi[j] = max(maxi[j],maxi[i]+1);
        }
        res = max(maxi[i],res);
    }
    cout<<res<<"\n";
}
int main()
{
    fasino
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    #endif
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        solve();
    }
    return 0;
}