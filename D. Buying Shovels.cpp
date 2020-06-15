// I'm a f*cking looser
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasino ios_base::sync_with_stdio(false); cin.tie(0);
#define asc(A) sort(A.begin(),A.end())
#define dsc(A) sort(A.begin(),A.end(),greater<ll>())
#define input(A,N) for(ll i=0;i<N;i++) cin>>A[i]; 
void solve()
{
    ll n,k;
    ll ans = 1;
    cin>>n>>k;
    if(k>=n){
        cout<<1<<'\n';return;
    }
    else{
        for(ll i=2; i*i <= n ;i++){
            if(n%i==0){
                if(i<=k){
                    ans = max(ans,i);
                }
                ll io = n/i;
                if(io <= k){
                    ans = max(ans,io);
                }
            }
        }
        cout<<n/ans<<'\n';
    }
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